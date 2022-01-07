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
	ll a, s; cin >> a >> s;
	vector<int> b;
	while(s){
		int x = a % 10; int y = s % 10;
		if(x <= y){
			b.push_back(y-x);
		}else{
			s/=10; y+=10*(s%10);
			if(x<y && y>=10 && y <= 19){
				b.push_back(y-x);
			}else{
				cout << -1 << endl;
				return;
			}
		}
		a/=10; s/=10;
	}
	if(a != 0){
		cout << -1 << endl;
	}else{
		while(b.back() == 0){
			b.pop_back();
		}
		for(int i = b.size() - 1; i >= 0; i--){
			cout << b[i];
		}
		cout << endl;
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
