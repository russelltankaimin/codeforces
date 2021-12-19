#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<array>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	int64_t n; cin >> n;
	vector<int64_t> a(n);
	for(auto &b : a){
		cin >> b;
	}
	array<int64_t,2> g = {0,0};
	for(int i = 0; i < n; i++){
		g[i%2] = gcd(g[i%2],a[i]);
	}
	array<bool,2> good = {true,true};
	for(int64_t i = 0; i < n; i++){
		int64_t o = (i+1) % 2;
		good[o] = good[o] && a[i] % g[o] != 0;
	}
	if(good[0]){
		cout << g[0] << endl;
	}else if(good[1]){
		cout << g[1] << endl;
	}else{
		cout << 0 << endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
