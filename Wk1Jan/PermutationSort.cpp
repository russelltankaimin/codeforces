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
	vector<int> a;
	for(int i = 0; i < n; i++){
		int b; cin >> b;
		a.push_back(b);
	}
	bool s = is_sorted(ALL(a));
	if(s){
		cout << 0 << endl;
	}else if(a[0] == 1 || a[n-1] == n){
		cout << 1 << endl;
	}else if(a[0] == n && a[n-1] == 1){
		cout << 3 << endl;
	}else{
		cout << 2 << endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
