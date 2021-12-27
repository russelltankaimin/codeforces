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
	int a[t];
	for(int &b : a){
		cin >> b;
	}
	sort(a,a+t);
	int d; cin >> d;
	while(d--){
		int k; cin >> k;
		int ans = upper_bound(a,a+t,k) - a;
		cout << ans << endl;
	}
	return 0;
}
