#include<iostream>
#include<vector>
using namespace std;

const int MAXN = 10005;
long long int dp[MAXN][MAXN];
vector<int> ori;
int main()
{
	freopen("input.txt", "r", stdin);
	int N, M;
	cin >> N >> M;
	ori.resize(N + 1);
	for (int i = 1; i <= N; i ++)
	{
		cin >> ori[i];
	}
	dp[0][0] = 1;
	for (int i = 1; i <= N; i ++)
	{
		for (int j = M; j >= 0; j --)
		{
			if(j >= ori[i])
			dp[i][j] = dp[i - 1][j - ori[i]] + dp[i - 1][j];
			else
			dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[N][M] << endl;
	return 0;
}










