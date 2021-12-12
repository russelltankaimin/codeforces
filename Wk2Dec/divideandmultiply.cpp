#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
pair<int,int> divide2(int n){
	int ans = 0;
	while(n > 0 && n % 2 == 0){
		n/=2;
		ans++;
	}
	pair<int,int> p;
	p.first = n;
	p.second = ans;
	return p;
}
void solve(){
	int n;
	cin >> n;
	vector<ll> a;
	int exp = 0;
	while(n--){
		int b;
		cin >> b;
		pair<int,int> p = divide2(b);
		exp += p.second;
		a.push_back(p.first);
	}	
	ll sum = 0;
	ll ans = 0;
	for(auto &o : a){
		ans = max(ans,o);
		sum += o;
	}
	sum -= ans;
	sum += ans*pow(2,exp);
	cout << sum  << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
