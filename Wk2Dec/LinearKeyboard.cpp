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

int abs(int x){
	return x > 0 ? x : -x;
}

void solve(){
	string a , t; cin >> a >> t;
	map<char,int> letters;
	int c = 0;int idx = 1;
	for(char d : a){
		letters[d] = idx;
		idx++;
	}
	for(int i = 1; i < t.length(); i++){
		c+= abs(letters[t[i]] - letters[t[i-1]]);
	}
	cout << c << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
