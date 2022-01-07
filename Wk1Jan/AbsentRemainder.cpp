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
	int n; cin >> n;
	vi a(n);
	for(auto &b : a){
		cin >> b;
	}
	sort(ALL(a));
	if(a.front() == 1){
		for(int i = 0; i < n/2;i++){
			cout << a[i+1] << " " << 1 <<endl;
		}
		return;
	}else{
		int ctr = 0;
		for(int i = 0; i < n && ctr < n/2;i++){
			for(int j = i + 1; j < n && ctr < n/2; j++){
				if(a[j] % a[i] == 0){
					ctr++;
					cout << a[j] << " " << a[i] << endl;
				}else if(gcd(a[j],a[i]) == 1){
					cout << a[j] << " " << a[i] << endl;
					ctr++;
				}else if(!(find(ALL(a),a[j]%a[i]) != a.end())){
					cout << a[j] << " " << a[i] << endl;
					ctr++;
				}else{
					continue;
				}
			}
		}
	}
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}