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
bool inside(char a, vector<char> b){
	for(int i = 0; i < b.size(); i++){
		if(a == b[i]){
			return true;
		}
	}
	return false;
}
int main(){
	string t;
	cin>>t;
	vector<char> a;
	vector<char> f;
	for( auto &b : t){
		a.push_back(b);
	}
	
	for(int i = 0; i < a.size(); i++){
		if(!inside(t[i],f)){
			f.push_back(t[i]);
		}
	}
	cout << (f.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
	return 0;
}
