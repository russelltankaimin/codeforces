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

int modNUM(int num, int mod){
  return num < 0 ? mod + num : ( num >= mod ? num - mod : num);
}


string dna = "ACTG";
int ops(string t){
  int ans = 0;
  for(int i = 0; i < 4; i++){
    int origIdx = t[i] - 'A';
    int corIdx = dna[i] - 'A';
    ans += min(modNUM(origIdx - corIdx,26), modNUM(corIdx - origIdx,26));
  }
  return ans;
}

void solve(){
  int n; cin >> n;
  string s; cin >> s;
  int ans = pow(10,9);
  for(int i = 0; i < s.length() - 4 + 1; i++){
    string t = s.substr(i,4);
    int test = ops(t);
    ans = min(ans,test);
  }
  cout << ans << endl;
}

int main(){
  solve();
	return 0;
}
