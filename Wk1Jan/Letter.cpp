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
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	bool ans = true;
	map<int,int> letters;
	for(int i = 0; i < s1.length(); i++){
		if(s1[i] != ' '){
			letters[s1[i]-'A']++;
		}
	}
	for(int i = 0; i < s2.length(); i++){
		ans &= (s2[i] == ' ' || letters[s2[i]-'A'] > 0);
		letters[s2[i]-'A']--;
	}
	cout << (ans ? "YES" : "NO") << endl;
}

int main(){
	solve();
	return 0;
}
