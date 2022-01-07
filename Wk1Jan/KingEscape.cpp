//#include "/Users/russelltankaimin/bits/stdc++.h"
include "bits/stdc++.h"
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
template<typename T, typename U>
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

bool range(int a, int start, int end){
	return start <= a && a <= end;
}

void solve(){
	int n; cin >> n;
	pair<int,int> k, q , t;
	cin >> q.first >> q.second >> k.first >> k.second >> t.first >> t.second;
	// find if the t and k are in the same quadrant
	if(range(k.first,1,q.first - 1) && range(k.second,1,q.second - 1)){
		if(range(t.first,1,q.first - 1) && range(t.second,1,q.second - 1)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		return;
	}else if(range(k.first,1,q.first - 1) && range(k.second,q.second + 1,n)){
		if(range(t.first,1,q.first - 1) && range(t.second,q.second + 1,n)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }   
    return;
	}else if(range(k.first,q.first+1,n)&&range(k.second,0,q.second-1)){
		if(range(t.first,q.first + 1,n) && range(t.second,0,q.second-1)){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
    return;
	}else{
		if(range(t.first,q.first+1,n) && range(t.second,q.second+1,n)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
		return;
	}
}

int main(){
	solve();
	return 0;
}
