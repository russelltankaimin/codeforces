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
	vector<string> s(2);
	cin >> s[0] >> s[1];
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(s[0][i] != s[1][i]){
			ans+=2;
		}else if(s[0][i] == '0'){
			if(i+1 < n){
				if(s[0][i+1] == '1' && s[1][i+1] == '1'){
					ans+=2; i++;
				}else{
					ans++;
				}
			}else{
				ans++;
			}
		}else{
			if(i+1<n){
				if(s[0][i+1] == '0' || s[1][i+1] == '0'){
					ans+=2; i++;
				}else{
					continue;
				}
			}else{
				continue;
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
