#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
void solve(){
	string s;
	cin >> s;
	int l = s.length();
	bool hasEven = ((int)s[l-1])%2==0;
	if(hasEven){
		cout << 0 << endl;
		return ;
	}
	int swaps = 0;
	for(int i = l-2; i >= 0; i--){
		if(((int)s[i])%2==0){
			cout << swaps << endl;
			return ;
		}else{
			swaps++;
		}
	}
	cout << -1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}

