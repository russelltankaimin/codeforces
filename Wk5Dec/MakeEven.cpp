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
	ll a; cin >> a;
	if(a % 2 == 0){
		cout << 0 << endl;
	}else{
		bool hasEven = false;
		vector<ll> d;
		ll b = a;
		while(b > 0){
			hasEven |= ((b  % 10 ) % 2 == 0);
			d.push_back(b % 10);
			b /= 10;
		}
		if(!hasEven){
			cout << -1 << endl;
		}else{
			if(d.back() % 2 == 0){
				cout << 1 << endl;
			}else{
				cout << 2 << endl;
			}
		}
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
