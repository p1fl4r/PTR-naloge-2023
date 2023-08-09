#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double t = 0, tt;
    int d, r, n, ddd = 0, x;
    cin >> d >> r >> n;
    for(int i = 0; i <n;i++){
        int dd;
        cin>>dd;
        t+=1.0*(min(dd, d)-ddd)/r;
        ddd = dd;
        if(dd >=d){
            x = t*100;tt= 1.0*x/100;
            cout<<tt<<"\n";
            return 0;
        }
        cin>>r;
    }
    if(ddd<d){
        t+=1.0*(d-ddd)/r;
    }
    x = t*100;tt= 1.0*x/100;
    cout<<tt<<"\n";
    return 0;
}