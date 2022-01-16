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
	int n, k; cin >> n >> k;
  int sum = pow(10,9);
  vector<int> acc(1,0);
  vector<int> a;
  for(int i = 0; i < n; i++){
    int b; cin >> b;
    a.push_back(b);
    acc.push_back(b+acc.back());
  }
//  debug(acc,false);
//  debug(a,false);
  pair<int,int>  ans = {10e9,0};
  for(int i = 0; i < acc.size() - k; i++){
    int amt = acc[i+k] - acc[i];
//    cout << amt << " start at i = " << i << endl;
    if(amt <  ans.first){
      ans.second = i + 1;
      ans.first = amt;
    }
  }
  cout << ans.second  << endl;
}

int main(){
  solve();
	return 0;
}
