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
	ll w, h ; cin >> w >> h;
	ll k; cin >> k;
	vector<ll> top, bottom , left, right;
	while(k--){
		ll a; cin >> a;
		bottom.push_back(a);
	}
	cin >> k;
	while(k--){
		ll a; cin >> a;
		top.push_back(a);
	}
	cin >> k;
	while(k--){
		ll a; cin >> a;
		left.push_back(a);
	}
	cin >> k;	
	while(k--){
		ll a; cin >> a;
		right.push_back(a);
	}
	// information collected
	ll maxleft = left.back() - left.front();
	ll maxright = right.back() - right.front();
	ll maxdown = bottom.back() - bottom.front();
	ll maxup = top.back() - top.front();
	ll ans = max(max(maxleft*w,maxright*w),max(maxdown*h,maxup*h));
	cout << ans << endl;

}

int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
