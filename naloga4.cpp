#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x1, y1, x2, y2, k, x3, y3, x4, y4;
    cin>>n>>m>>x1>>y1>>x2>>y2>>k;
    vector<vector<bool>> b(m+2, vector<bool>(n+2, 0));

    for(int i = 0; i < m+2; i++)b[i][0] = 1; // meje
    for(int i = 0; i < m+2; i++)b[i][n+1] = 1;
    for(int i = 0; i < n+2; i++)b[m+1][i] = 1;
    for(int i = 0; i < n+2; i++)b[0][i] = 1;

    for(;k--;){
        cin>>y3>>x3>>y4>>x4;
        if(y3>y4)swap(y3, y4);
        if(x3>x4)swap(x3, x4);
        int i=(x3==x4) ? y3 : x3;
        while(1){
            b[(y3==y4) ? y3 : i][(x3==x4) ? x3 : i]=1;
            if(x3==x4&&i==y4||y3==y4&&i==x4)break;
            i++;
        }
    }

    // ni ga čez PRINTF statement debugging
    // for(int i = 0; i < m+2; i++){
    //     for(int j = 0; j < n+2; j++){
    //         cout<<(b[i][j]==1);
    //     }
    //     cout<<"\n";
    // }

    //meet in the middle bi bila najboljša, ni časa
    int stevec = 0;
    queue<pair<int, int>> q;
    q.push({x2, y2});
    vector<pair<int, int>> smeri = {{1,0},{0,1},{-1,0},{0,-1}};
    pair<int,int> nic = {-1,-1};
    q.push(nic);
    for(int i=0;1;i++){
        if(q.front()!=nic){
            for(pair<int,int> par:smeri){
                if(b[q.front().first][q.front().second]!=1){
                    q.push({q.front().first+par.first,q.front().second+par.second});
                }
            }
            if(q.front().first==x1 && q.front().second==y1){
                cout<<stevec<<"\n";
                return 0;
            }
            b[q.front().first][q.front().second]=1;
            q.pop();
        }else{
            if(q.size()==1){
                break;
            }
            q.push(nic);
            q.pop();
            stevec++;
            continue;
        }
    }
    
    cout<<"Ne najdem! Obrni racunalnik okoli in poskusi ponovno.\n";
    return 0;
}