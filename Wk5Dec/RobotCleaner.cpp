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

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


void solve(){
	int dr = 1; int dc = 1;
	int n, m , rb, cb, rd,cd; cin >> n >> m >> rb >> cb >> rd >> cd ;
	int ans = 0;
	while(rb != rd && cb != cd){
		ans++;
		if(rb+dr > n || rb + dr < 1){
			dr = -dr;
		}
		if(cb + dc > m || cb + dc < 1){
			dc = -dc;
		}
		rb += dr;
		cb += dc;
	} 	
	cout << ans << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
