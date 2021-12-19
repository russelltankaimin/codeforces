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
	int n; string x; cin >> n >> x;
	string a = "";
	string b = "";
	int idx = 0;
	while(idx < n && (x[idx] == '2' || x[idx] == '0')){
		if(x[idx] == '2'){
			a += "1"; b += "1";
		}else{
			a += "0"; b += "0";
		}
		idx++;
	}
	for(int i = idx; i < n; i++){
		if(i == idx){
			a += "1"; b += "0";
			continue;
		}
		if(x[i] == '0'){
			a += "0"; b += "0";
		}else if(x[i] == '1'){
			a += "0" ; b += "1";
		}else{
			a += "0" ; b += "2";
		}
	}
	cout << a << endl;
	cout << b << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
