#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <cmath>
#include <utility>
#include <map>
#define ll long long
#define ull unsigned long long int
ll MAX = 6*pow(10,18);
ll MIN = -6 * pow(10,18);
using namespace std;
template <typename T>
T maximum(T a, T b){
	return a > b ? a : b;
}

template < typename U>
U minimum(U a, U b){
	return a > b ? b : a;
}

int abs(int x){
	return x > 0 ? x : -x;
}

void solve(){
	int num;
	int64_t cost = 0;
	vector<pair<ll,ll>> a;
	vector<int> b;
	vector<ll> ans;
	ans.push_back(0);
	pair<ll,ll> p(0,0);
	cin >> num;
	int64_t count = 1;
	while(num--){
		cin >> p.first;
		p.second = count;
		count ++;
		a.push_back(p);
	}
	sort(a.begin(),a.end(),[](pair<ll,ll>& p1, pair<ll,ll>& p2){
		return p1.first >  p2.first;
	});
	for(int64_t i = 1; i <= count;i++){
		b.push_back(i);
		b.push_back(-i);
	}
	for(int64_t i  = 0; i < a.size() ; i++){
		cost += 2*a[i].first*abs(b[i]);
		a[i].first = b[i];
	}
	sort(a.begin(),a.end(),[](pair<ll,ll>& p1, pair<ll,ll>& p2){
		return p1.second < p2.second;
	});
	cout << cost << endl;
	ll hi = MAX; ll lo = MIN;
	for(int64_t i = 0; i < a.size(); i++){
		ans.push_back((ll)a[i].first);
		lo = minimum(lo,a[i].first);
		hi = maximum(hi,a[i].first);
	}
	if(lo < MIN){
		ll diff = MIN - lo;
		for(int i = 0; i < ans.size(); i++){
			ans[i] += diff;
			cout << ans[i] << " ";
		}
	}else if(hi > MAX){
		ll diff = hi - MAX;
		for(int i = 0; i < ans.size(); i++){
			ans[i] -= diff;	
			cout << ans[i] << " ";
		}
	}else{
		for(int i = 0; i < ans.size(); i++){
			cout << ans[i] << " ";
		}

	}
	cout<<""<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}

