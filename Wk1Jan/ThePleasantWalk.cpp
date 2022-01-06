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
	int n; cin >> n;
	int c; cin >> c;
	vector<int> a(n);
	for(auto &b : a){
		cin >> b;
	}
	if( c == 1){cout << 1 << endl; return;}
	a.push_back(a[n-1]);
	int seq = 1;
	int ans = 0;
	bool same = true;
	for(int i = 1; i < a.size(); i++){
		if(a[i] != a[i-1]){
			seq++;
			same = false;
		}else{
			ans = max(seq,ans);
			seq = 1;
		}
	}
	cout << (same ? 0 : ans) << endl;
}

int main(){
	solve();
	return 0;
}
