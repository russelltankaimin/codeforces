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
	vector<int> a(n) , b(n);
	for(auto &c : a){cin >> c;}
	for(auto &d : b){cin >> d;}
	sort(ALL(a)); sort(ALL(b));
	for(int i = 0; i < n; i++){
		if(abs(a[i]-b[i]) > 1 || a[i] > b[i]){
			cout << "NO" << endl;
			return;
			}
		}
	cout << "YES" << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
