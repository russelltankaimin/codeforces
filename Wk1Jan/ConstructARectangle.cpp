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
	int a, b, c; cin >> a >> b >> c;
	vector<int> aa;
	aa.push_back(a);
	aa.push_back(b);
	aa.push_back(c);
	sort(ALL(aa));
	if(aa[0] + aa[1] == aa[2]){
		cout << "YES" << endl;
		return;
		}
	if(a == b){
			cout << (c % 2 == 0 ? "YES" : "NO") << endl;
			return;
		}else if(b == c){
			cout << (a % 2 == 0 ? "YES" : "NO") << endl;
			return;
		}else if(a == c){
			cout << (b % 2 == 0 ? "YES" : "NO") << endl;
			return;
		}else{
			cout << "NO" << endl;
			return;
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
