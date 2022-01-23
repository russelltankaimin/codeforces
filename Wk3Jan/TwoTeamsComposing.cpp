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
template<typename T, typename U, typename V>
T min(U a, V b){
  return a < b ? a : b;
}
template<typename T, typename U, typename V>
T max(U a, V b){
  return a > b ? a : b;
}
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
  vector<int> a(2*(1e5) + 1);
  vector<int> vec;
  for(int i = 0; i < n; i++){
    int b; cin >> b;
    a[b]++;
    vec.push_back(b);
  }
  if(n == 1){
    cout << 0 << endl;
    return;
  }
  int highest = *max_element(ALL(a));
  sort(ALL(vec));
  UNIQUE(vec);
  int uniques = vec.size();
 // cout << "There are "<<uniques << " elements" << endl;
 // cout << "Highest element count " << highest << endl;
  if(uniques == n){
    cout << 1 << endl;
  }else{
    int ans = min<int>(highest - 1, uniques);
    int ans1 = min<int>(highest,uniques - 1);
    cout << max<int>(ans,ans1) << endl;
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
