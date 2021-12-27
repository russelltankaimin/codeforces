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

void solve(){
	string s; cin >> s;
	if(s.length() % 2 == 1){
		cout << "NO" << endl;
		return;
	}else{
		int l = s.length();
		for(int i = 0; i < l/2; i++){
			if(s[i] != s[i+l/2]){
				cout << "NO" << endl;
				return;
			}
		}
		cout << "YES" << endl;
		return;
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
