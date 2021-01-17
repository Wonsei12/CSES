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
	vector<string> board(8);
	for(int i=0 ; i<8 ; i++)
		cin >> board[i];
	int ans = 0;
	vector<int> c = {0,1,2,3,4,5,6,7};
	do {
		bool fail = false;
		for(int i=0 ; i<8 ; i++) {
			if(board[i][c[i]]=='*')
				fail = true;
		}
		if(fail)
			continue;
		for(int i=0 ; i<8 ; i++) {
			for(int j=0 ; j<8 ; j++) {
				if(i==j)
					continue;
				if((c[i]+i)==(c[j]+j))
					fail = true;
				if((c[i]-i)==(c[j]-j))
					fail = true;
			}
		}
		if(fail)
			continue;
		ans += 1;
	}while(next_permutation(all(c)));
	cout << ans << "\n";
}	

int main() {
	IOS;
	int t; t = 1;
	while(t--)
		solve();
}