//#include "/Users/russelltankaimin/bits/stdc++.h"
#include "bits/stdc++.h"
/*
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
#include<deque>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
*/
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())
template<typename T,typename U>
void debug(pair<T,U> a, bool submit){
	if(!submit){
		cout <<"[ ";
	}
	for(int i = 0; i < a.size();i++){
		cout << "(" << a[i].first << "," << a[i].second <<")" << " ";
	}
		cout <<(!submit ? " ]" : "")<< endl;
}
template<typename T>
void debug(T a, bool submit){
	if(!submit){
		cout <<"[ ";
	}
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
		cout <<(!submit ? " ]" : "")<< endl;
}

void solve(){
	ll a , b, c; cin >> a >> b >> c;
	ll d1 = b - a;
	ll c1 = b + d1;
	if(c1 % c == 0 && c1/c > 0){
	//	cout << "Multiply c by " << c1/c << endl;
		cout << "YES" << endl;
		return;
	}
	ll d2 = c - b;
	ll a1 = b - d2;
	if(a1 % a == 0 && a1/a > 0){
	//	cout << "Multiply a by " << a1/a << endl;
		cout << "YES" << endl;
		return;
	}
	ll d3 = c - a;
	if(d3 % 2 != 0){
		cout << "NO" << endl;
		return;
	}else{
		ll d4 = d3/2;
		ll b2 = a + d4;
		if(b2 % b == 0 && b2/b > 0){
//			cout << "Multiply b by " << b2/b << endl;
			cout << "YES" << endl;
			return;
		}else{
			cout << "NO" << endl;
			return;
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
