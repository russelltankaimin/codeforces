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
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())

template<typename T>
void display(T a){
	cout << "[ ";
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout <<" ]"<< endl;
}

void solve(){
	int t; cin >> t;
	vector<int> gd , bad;
	vector<int> a(t);
	for(int i = 0; i < t; i++){
		cin >> a[i];
		}
	string s; cin >> s;
	map<int,int> b;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0'){bad.push_back(a[i]);}
		else{gd.push_back(a[i]);}
		}
	sort(ALL(gd),[](int a, int b){return a > b;});
	sort(ALL(bad));
	for(int i = t , j = 0; j < gd.size() ; j++,i--){
		b[gd[j]] = i;
		}
	for(int i = 0; i < bad.size(); i++){
		b[bad[i]] = i+1;
		}
	for(int i = 0; i < a.size();i++){
		cout << b[a[i]] << " ";
		}
		cout << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
