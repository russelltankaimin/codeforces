#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#include<iomanip>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;

void solve(){
	ll t ; cin >> t;
	map<ll,ll> a;
	set<ll> aa;
	for(int i = 0; i < t; i++){
		int b; cin >> b;
		aa.insert(b);
		a[b]++;
	}
	vector<ll> ab = vector<ll>(aa.begin(),aa.end());
	sort(ab.begin(),ab.end());
	ll hi = ab.back() - ab.front();
	cout << hi << " ";
	ll ans = 0;
	if(ab.size() == 1){
		ll w = a[ab[0]];
		cout << w*(w-1)/2 << endl;
		return;
	}
	for(int i = 0; i < ab.size(); i++){
		ans += a[ab[i]]*a[ab[i]+hi];
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}
