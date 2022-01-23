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

template<typename T>
void printPair(pair<T,T> u){
  cout << "[" << u.first << " " << u.second << "]" << endl;
}

void solve(){
  int n, m; cin >> n >> m;
  vector<pair<ll,ll> > rooms;
  ll s = 1;
  for(int i = 0; i < n; i++){
    pair<ll,ll> p;
    p.first = s;
    ll c; cin >> c;
    p.second = s + c - 1;
    s = s + c;
    rooms.push_back(p);
  }
  for(int i = 0; i < m; i++){
    ll l; cin >> l;
    int start = 0; int end = n - 1;
    while(start <= end){
      ll mid = start + (end - start) / 2;
      //printPair(rooms[mid]);
      if(l > rooms[mid].second){
        start = mid + 1;
      }else if(l < rooms[mid].first){
        end = mid;
      }else{
        cout << mid + 1 << " " << l - rooms[mid].first + 1 << endl;
        break;
      }
    }
  }
}

int main(){
  solve();
	return 0;
}
