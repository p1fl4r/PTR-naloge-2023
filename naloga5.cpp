#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<vector<int>> v;
int main()
{
	int n, m, b;
	cin >> n >> m;
	v.assign(n, vector<int>(m, 0));
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
			(s[j] == 'H') ? v[i][j] = 1 : 0;
		if (s[0] == 'B')
			b = i;
	}
	for (int i = m - 2; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			int r = (j == 0) ? 0 : v[j - 1][i + 1];
			int t = v[j][i + 1];
			int q = (j == n - 1) ? 0 : v[j + 1][i + 1];
			v[j][i] += max(r, max(t, q));
		}
	}
	cout << v[b][0] << '\n';
	return 0;
}