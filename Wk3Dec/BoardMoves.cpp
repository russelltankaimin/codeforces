#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	ll t; cin >> t;
	ll n = (t - 1) / 2 ;
	ll ans = 4*n*(n+1)*(2*n+1);
	cout << ans/3 << endl;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
