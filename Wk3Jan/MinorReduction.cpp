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
void debug(vector<pair<T,U> > a, bool submit){
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
//array<int,10> d = {0,1,2,3,4,5,6,7,8,9};
string d[10] = {"0","1","2","3","4","5","6","7","8","9"};
string numToString(int n){
  if(n < 10){return d[n];}
  else{
    string ans = "";
    ans += d[n/10];
    ans += d[n % 10];
    return ans;
  }
}
void solve(){
  	string s; cin >> s;
    int n = s.size();
    int idx = 0;
    for(int i = 0; i < n - 1; i++){
      int x = s[i] - '0';
      int y = s[i+1] - '0';
//      cout << " x y " << x << "  "  << y << endl;
      if(x+y > 9){
        idx = i;
      }
    }
    string ans = "";
    for(int i = 0; i < idx; i++){
      ans += s[i];
    }
    int x = (s[idx] - '0') + (s[idx + 1] - '0');
//    cout << "combined : " << x << endl;
    ans += numToString(x);
//    cout << "Preliminary ans -> " << ans << endl;
    for(int i = idx + 2; i < n; i++){
      ans += s[i];
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
