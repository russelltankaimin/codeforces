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
	int t; cin >> t;
	vector<int> a(t);
	for(auto &c : a){
		cin >> c;
	}
	reverse(a.begin(), a.end());
	for(int i = 0; i < t; i++){
		cout << a[i] <<" ";
	}
	cout << "" << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
