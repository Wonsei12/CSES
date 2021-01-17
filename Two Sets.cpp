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
	ll n; cin >> n;
	if((n*(n+1)/2)%2) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	if(n&1) {
		cout << n / 2 << "\n";
		cout << n << " ";
		for(int i=1 ; i<=(n-1)/4 ; i++) {
			cout << i << " " << n - i << " ";
		}
		cout << "\n";
		cout << n / 2 + 1 << "\n";
		for(int i=(n-1)/4+1 ; i<=(n-1)/2 ; i++) {
			cout << i << " " << n - i << " ";
		}
	} else {
		cout << n / 2 << "\n";
		for(int i=1 ; i<=n/4 ; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
		cout << "\n";
		cout << n / 2 << "\n";
		for(int i=n/4+1 ; i<=n/2 ; i++) {
			cout << i << " " << n + 1 - i << " ";
		}
	}
}

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}