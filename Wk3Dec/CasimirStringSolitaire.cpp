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
	string s; cin >> s;
	array<int,3> a = {0,0,0};
	for(char b : s){
		if(b == 'A'){a[0]++;}
		else if(b == 'B'){a[1]++;}
		else{a[2]++;}
	}
	cout << (a[0] + a[2] == a[1] ? "YES" : "NO") << endl;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
