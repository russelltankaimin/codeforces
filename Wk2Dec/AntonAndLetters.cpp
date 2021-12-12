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
bool inside(char a , vector<char> b){
	for(int i = 0; i < b.size(); i++){
		if(a==b[i]){
			return true;
		}
	}
	return false;
}
int main(){
	string s,t;
	vector<char> a;
	vector<char> b;
	cin >> t;
	while(t!='}'){
		if(isalpha(t)){
			a.push_back(t);
		}
		cin >> t;
	}
	for(int j = 0; j < a.size(); j++){
		if(!inside(a[j],b)){
			b.push_back(a[j]);
		}
	}
	cout<<b.size()<<endl;
	return 0;
}
