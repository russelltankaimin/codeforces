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
	int x; cin >> x;
	vector<int> a(x);
	for(auto &b : a){
		cin >> b;
	}
	int ans = 1;
	int consec = 0;
	for(int i = 0; i < a.size() ; i++){
		if(a[i] == 0){
			consec++;
			if(consec == 2){cout << -1 << endl; return;}
		}else if(i != 0 && a[i] == 1){
			if(a[i-1]==1){
				ans += 5;
				consec = 0;
			}else{
				ans++;
				consec = 0;
			}
		}else{
			ans++;
			consec = 0;
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
