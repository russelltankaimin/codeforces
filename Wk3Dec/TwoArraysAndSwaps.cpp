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

bool decreasing(int a, int b){
	return a > b;
}

void solve(){
	int n , k; cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);
	for(auto &c : a){
		cin >> c;
	}
	for(auto &c : b){
		cin >> c;
	}
	int ans = 0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),decreasing);
	for(int i = 0; i < n; i++){
		if(i < k){
			ans += max(a[i],b[i]);
		}else{
			ans += a[i];
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
