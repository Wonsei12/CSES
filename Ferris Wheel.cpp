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

void solve() {
	int n, x; cin >> n >> x;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	sort(a.begin(),a.end());
	vector<bool> vis(n);
	int idx1=n-1;
	int ans = 0;
	for(int i=0 ; i<n ; i++) {
		if(vis[i]) continue;
		bool suc = false;
		while(i<idx1) {
			if(a[i] + a[idx1] <= x) {
				suc = true;
				vis[i]=vis[idx1]=1;
				ans += 1;
				idx1-=1;
				break;
			}
			idx1--;
		}
		if(suc) continue;
		vis[i]=1;
		ans+=1;
	}
	cout << ans << "\n";
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}