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
	vector<int> a(t);
	int lo = 200;
	int hi = -1;
	for(auto &b : a){
		cin >> b;
		lo = min(lo,b);
		hi = max(hi,b);
	}
	// find leftmost max and rightmost min
	int lidx = 0; int hidx = t - 1;
	for(int i = 0; i < t; i++){
		lidx = a[i] == lo ? i : lidx;
		}
	for(int i = t - 1; i >= 0; i--){
		hidx = a[i] == hi ? i : hidx;
		}
	cout << hidx + (t - lidx - 1) - (hidx > lidx) << endl;
}

int main(){
	solve();
	return 0;
}
