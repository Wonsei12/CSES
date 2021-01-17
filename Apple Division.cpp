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
	vector<ll> a(n);
	ll sum = 0;
	for(auto &x : a) {
		cin >> x;
		sum += x;
	}
	ll mn = LLINF;
	for(int mask = 0 ; mask < pw(n) ; mask++) {
		int tmp = mask;
		int idx = 0;
		ll s = 0;
		while(tmp > 0) {
			if(tmp&1)
				s += a[idx];
			idx += 1;
			tmp /= 2;
		}
		mn = min(mn, abs(sum-s-s));
	}
	cout << mn << "\n";
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}