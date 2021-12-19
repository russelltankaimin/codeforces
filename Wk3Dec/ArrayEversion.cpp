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
void solve(){
	int hi = 0;
	int t; cin >> t;
	vector<int> a(t);
	for(auto &b : a){
		cin >> b;
		hi = max(hi,b);
	}
	int ans = 0;
	int curr = 0;
	for(int i = t - 1; i >= 0; i--){
		if(a[i] == hi){
			cout << ans << endl;
			return;
		}
		if(a[i] > curr){
			ans++;
			curr = a[i];
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
