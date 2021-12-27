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

void solve(string c, string s){
	string alphabet = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string ans = "";
	for(auto &b : s){
		if(c == "L"){
			int idx = alphabet.find(b);
			ans += alphabet[idx+1];
		}else{
			int idx = alphabet.find(b);
			ans += alphabet[idx-1];
		}
	}
	cout << ans << endl;
}

int main(){
	string c, s; cin >> c >> s;
	solve(c,s);
	return 0;
}
