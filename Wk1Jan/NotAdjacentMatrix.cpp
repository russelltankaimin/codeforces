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
template<typename T, typename U>
void debug(pair<T,U>  a, bool submit){
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

void display(vvi a){
	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < a[i].size(); j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

void solve(){
	int n; cin >> n;
	if(n == 2){cout << -1 << endl; return;}
	vvi m(n,vi(n,0));
	int curr = 1;bool stag = false;
	for(int i = 0; i < n; i++){
		for(int j = stag ? 1 : 0; j < n; j+=2){
			m[i][j] = curr;
			curr++;
		}
		stag = !stag;
	}
	stag = true;
	for(int i = 0; i < n; i++){
		for(int j = stag ? 1 : 0; j < n; j+=2){
			m[i][j] = curr;
			curr++;
		}
		stag = !stag;
	}
	display(m);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
