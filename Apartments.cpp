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
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(n), b(m);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i1 = 0, i2 = 0, ans = 0;
	while(i1<n&&i2<m) {
		if(a[i1] >= b[i2] - k && a[i1] <= b[i2] + k) {
			ans += 1;
			i1 += 1;
			i2 += 1;
		} else if(a[i1] > b[i2] + k) {
			i2 += 1;
		} else if(a[i1] < b[i2] - k) {
			i1 += 1;
		}
	}
	cout << ans << "\n";
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}