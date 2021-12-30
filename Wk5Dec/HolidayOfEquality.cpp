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
	
}

int main(){
	int t;
	cin>>t;
	int w = 0;
	int hi = 0;
	for(int i = 0; i < t; i++){
		int b; cin >> b;
		w+=b;
		hi = max(hi,b);
	}
	cout << hi*t - w << endl;
	return 0;
}
