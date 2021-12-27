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
	int e , w; cin >> e;
	w = 100 - e;
	if(e == 0 || e == 100){
		cout << 1 << endl;
	}else{
		cout << (e/gcd(e,w)) + (w/gcd(e,w)) << endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
