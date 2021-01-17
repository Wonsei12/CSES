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
	int n; cin >> n;
	vector<pii> ans;
	function<void(int,int,int,int)> solve = [&](int layer, int f, int s, int t) {
		if(layer==1) {
			ans.push_back({f,t});
			return;
		}
		solve(layer-1,f,t,s);
		ans.push_back({f,t});
		solve(layer-1,s,f,t);
	};
	solve(n,1,2,3);
	cout << sz(ans) << "\n";
	for(auto x : ans) {
		cout << x.ff << " " << x.ss << "\n";
	}
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}