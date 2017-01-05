#include<bits/stdc++.h>
#define pb push_back
#define FOR(i, n) for (int i = 0; i < (int)n; ++i)
#define dbg(x) cout << #x << " at line " << __LINE__ << " is: " << x << endl
typedef long long ll;
using namespace std;
typedef pair<int, int> pii;
const int maxn = 1e3 + 10;
int n, m;
long long dp[maxn][maxn];
int a[maxn];
void solve() {
	freopen("input.txt", "r", stdin);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
   for (int i = 0; i <= maxn; i ++)
   dp[i][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= a[i]; j--) {
            dp[i][j] = dp[i - 1][j - a[i]] + dp[i - 1][j];
        }
        for (int j = a[i] - 1; j >= 0; j --)
        {
        	dp[i][j] = dp[i - 1][j];
		}
    }
    cout << dp[n][m] << endl;
}
int main() {
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);
    solve();
    return 0;
}
