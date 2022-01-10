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
	int n; cin >> n;
	vector<int> a(n), s(n);
	map<int,array<int,2> > aa, ss;
	for(int i = 0; i < n; i++){
		int b; cin >> b;
		a[i] = b; s[i] = b;
		aa[b][i%2]++;
	}
	sort(ALL(s));
	for(int i = 0; i < n; i++){
		ss[s[i]][i%2]++;
	}
	bool ans = true;
	for(auto &[key,value] : aa){
		ans &= (ss[key][0] == value[0] && ss[key][1] == value[1]);
	}
	cout << (ans ? "YES" : "NO") << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
