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
  string s; cin >> s;
  vector<int> two, five, seven, zero;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '2'){two.push_back(i);}
    else if(s[i] == '5'){five.push_back(i);}
    else if(s[i] == '7'){seven.push_back(i);}
    else if(s[i] == '0'){zero.push_back(i);}
    else{continue;}
  }
 int ans = pow(10,9);
 for(int i = 0; i < two.size(); i++){
  for(int j = 0; j < five.size(); j++){
    if(two[i] < five[j]){
      ans = min<int>(ans, s.length() - five[j] - 1 + five[j] - two[i] - 1);
   }
  }
 }
 for(int i = 0; i < seven.size(); i++){
  for(int j = 0; j < five.size(); j++){
    if(seven[i] < five[j]){
      ans = min<int>(ans, s.length() - five[j] - 1 + five[j] - seven[i] - 1); 
   }   
  }
 }
 for(int i = 0; i < five.size(); i++){
  for(int j = 0; j < zero.size(); j++){
    if(five[i] < zero[j]){
      ans = min<int>(ans, s.length() - zero[j] - 1 + zero[j] - five[i] - 1); 
   }   
  }
 }
 for(int i = 0; i < zero.size(); i++){
  for(int j = i + 1; j < zero.size(); j++){
    if(zero[i] < zero[j]){
      ans = min<int>(ans, s.length() - zero[j] - 1 + zero[j] - zero[i] - 1); 
   }   
  }
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
