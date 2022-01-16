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
typedef bitset<30> BITS;
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
  int n; int l; cin >> n >> l;
  vector<BITS> a(n);
  for(int i = 0; i < n; i++){
    int c; cin >> c;
    BITS b(c);
    //debug(b,false);
    a[i] = b;
   }
   int ans = 0;
   for(int i = 0; i < l; i++){
    int cnt = 0;
    for(int j = 0; j < n; j++){
     cnt += a[j][i] == 1;
    }
    if(cnt > n/2){
      ans += (1 << i);
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
