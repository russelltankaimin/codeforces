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
	
}

int main(){
	int t;
	string s;
	bool ans = true;
	vector<bool> a(26,false);
	cin>>t >> s;
	if(t < 26){
		cout << "NO" << endl;
		return 0;
	}
	for(auto b : s){
		a[tolower(b)-'a'] = true;
	}
	for(bool b : a){
		ans &= b;
	}
	cout << (ans ? "YES" : "NO") << endl;
	return 0;
}
