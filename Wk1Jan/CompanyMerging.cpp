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
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())

template<typename T>
void display(T a){
	cout << "[ ";
	for(ll i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout <<" ]"<< endl;
}


void solve(){
	ll n; cin >> n;
	vector<ll> a(n);
	vector<ll> mx(n);
	ll hi = 0;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		ll smx = 0;
		for(ll j = 0; j < a[i];j++){
			ll b; cin >> b;
			smx = max(b,smx);
			hi = max(hi,b);
		}
		mx[i] = smx;
	}
	ll ans = 0;
	for(ll i = 0; i < n; i++){
		ans += mx[i] == hi ? 0 : a[i]*(hi - mx[i]);
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}
