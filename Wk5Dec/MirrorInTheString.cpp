#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#include<iomanip>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


void solve(){
	int l; string s; cin >> l >> s;
	string ans = ""; ans += s[0];
	if(s[0] <= s[1]){
		cout << s[0] << s[0] << endl;
		return;
		}else{
		for(int i = 1; i < l; i++){
			if(s[i]>s[i-1]){
				break;
			}else{ans+=s[i];}
		}
		cout << ans;
		reverse(ans.begin(),ans.end());
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
