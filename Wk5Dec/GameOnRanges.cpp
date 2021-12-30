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

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


void solve(){
	int n; cin >> n;
	vector<pair<int,int> > r;
	vector<int> c(n+1);
	for(int i = 0; i < n; i++){
		pair<int,int> p; cin >> p.first >> p.second;
		r.push_back(p);
	}
	sort(r.begin(),r.end(),[](pair<int,int> &a, pair<int,int> &b){
		if(a.first != b.second){
			return a.first < b.first;
		}else{
			return a.second - a.first > b.second - b.first;
		}
	});
	for(int i = r.size() - 1; i >= 0; i--){
		pair<int,int> p = r[i];
		if(p.first == p.second){
			cout << p.first << " " << p.second << " " << p.first << endl;
			c[p.first] = 1;
		}else{
			int o;
			for(int j = p.second; j >= p.first; j--){
				if(c[j] == 0){
					o = j; break;
				}
			}
			c[o] = 1;
			cout << p.first << " " << p.second << " " << o << endl;
		}
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
