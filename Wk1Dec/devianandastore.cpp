#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
void solve(){
	ll n, l, k , r;
	vector<ll> costs;
	cin >> n >> l >> r >> k;
	ll sweets;
	while(n--){
		cin >> sweets;
		costs.push_back(sweets);
	}
	sort(costs.begin(),costs.end());
	int ans = 0;
	int spent = 0;
	for(ll a : costs){
		if(spent + a > k){
			break;
		}else{
			if(a <= r && a >= l){
			ans++;
			spent += a;
			}
		}
	}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}

