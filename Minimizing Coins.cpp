#define LOCAL

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2")

#define IOS ios::sync_with_stdio(false);cin.tie(0)
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define LLINF 0x3f3f3f3f3f3f3f3f
#define INF 0x3f3f3f3f
#define uniq(x) sort(all(x)); x.resize(unique(all(x))-x.begin());
#define sz(x) (int)x.size()
#define pw(x) (1LL<<x)

using pii = pair<int, int>;
using ll = long long;
const ll MOD = 1e9 + 7;
const long double PI = acos(-1.0);

const int mxN = 1000190;

void solve() {
	int n, x; cin >> n >> x;
	vector<int> c(n);
	vector<int> dp(mxN, INF);
	for(int i=0 ; i<n ; i++) {
		cin >> c[i];
		dp[c[i]] = 1;
	}
	for(int i=0 ; i<=x ; i++) {
		if(dp[i]==INF) continue;
		for(int j=0 ; j<n ; j++) {
			if(i+c[j] > x)
				continue;
			dp[i+c[j]] = min(dp[i+c[j]],dp[i]+1);
		}
	}
	if(dp[x] == INF)
		cout << -1 << "\n";
	else
		cout << dp[x] << "\n";
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}