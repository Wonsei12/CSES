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
	string s; cin >> s;
	vector<int> cnt(26);
	for(char c : s) 
		cnt[(int)(c-'A')]+=1;
	bool flag = false;
	int idx = -1;
	for(int i=0 ; i<26 ; i++) {
		if(cnt[i]%2&&!flag) {
			flag = true;
			idx = i;
		} else if(cnt[i]%2&&flag) {
			cout << "NO SOLUTION\n";
			return;
		} 
	}
	string ans = "";
	for(int i=0 ; i<26 ; i++) {
		if(idx==i)
			continue;
		for(int j=0 ; j<cnt[i]/2 ; j++) {
			ans += (char)(i + 'A');
		}
	}
	if(flag) {
		for(int i=0 ; i<cnt[idx] ; i++) {
			ans += (char)(idx + 'A');
		}
	}
	for(int i=25 ; i>=0 ; i--) {
		if(idx==i)
			continue;
		for(int j=0 ; j<cnt[i]/2 ; j++) {
			ans += (char)(i + 'A');
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