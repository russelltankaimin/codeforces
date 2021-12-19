#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	int n; cin >> n;
	vector<string> a(n-2);
	for(string &b : a){
		cin >> b;
	}
	if(n == 3){
		cout << a[0] << "a" << endl;
		return;
	}else{
		string ans = "";
		for(int i = 1; i < n-2 ; i++){
			if(a[i][0] != a[i-1][1]){
				ans += a[i-1];
			}else{
				ans+= a[i-1][0];
			}
		}
		ans+=a[n-3];
		if(ans.length() < n){
			ans += 'a';
		}
		cout << ans << endl;
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
