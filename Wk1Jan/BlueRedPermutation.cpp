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

template<typename T>
void debug(T a, bool submit){
	if(!submit){
		cout <<"[ ";
	}
	for(int i = 0; i < a.size();i++){
		cout << "(" << a[i].first << "," << a[i].second <<")" << " ";
	}
		cout <<(!submit ? " ]" : "")<< endl;
}

void solve(){
	int n; cin >> n;
	vector<pair<int,char> > a(n);
	string s;
	for(int i = 0; i < n; i++){
		pair<int,char> p;
		cin >> p.first;
		p.second = '0';
		a[i] = p;
	}
	cin >> s;
	for(int i = 0; i < n; i++){
		a[i].second = s[i];
	}
	sort(ALL(a),[](pair<int,char> a, pair<int,char> b){
		if(a.second == 'B' && b.second == 'R'){
				return true;
			}else if(a.second == 'R' && b.second == 'B'){
				return false;
			}else{
				return a.first < b.first;
			}
		});
	bool ans = true;
//	debug(a,false);
	for(int i = 0; i < n; i++){
		if(a[i].first == i + 1){
			continue;
		}else if(a[i].first < i + 1){
			ans &= a[i].second == 'R';
		}else{
			ans &= a[i].second == 'B';
		}
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
