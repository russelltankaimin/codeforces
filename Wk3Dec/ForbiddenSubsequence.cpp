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
	string a, b; cin >> a >> b;
	int aa = 0; int ab = 0; int ac = 0;
	vector<char> others;
	for(char &c : a){
		if(c == 'a'){aa++;}
		else if(c == 'b'){ab++;}
		else if(c == 'c'){ac++;}
		else{others.push_back(c);}
	}
	sort(others.begin(), others.end());
	if(aa == 0 || ab == 0 || ac == 0){
		sort(a.begin(),a.end());
		cout << a << endl;
		return;
	}
	if(b == "abc" && a == b){
		cout << "acb";
	}else if(b == "abc"){
		for(int i = 0; i < aa; i++){
			cout << 'a';
		}
		for(int i = 0; i < ac; i++){
			cout << 'c';
		}
		for(int i = 0; i < ab; i++){
			cout << 'b';
		}
		for(auto &g : others){
			cout << g;
		}
	}else{
		for(int i = 0 ; i < aa; i++){
			cout << 'a';
		}
		for(int i = 0; i < ab; i++){
			cout << 'b';
		}
		for(int i = 0; i < ac; i++){
			cout << 'c';
		}
		for(int i = 0; i < others.size(); i++){
			cout << others[i];
		}
	}
	cout << "" << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
