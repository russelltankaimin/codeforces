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
	cout << "[ ";
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout <<" ]"<< endl;
}


void solve(){
	int n; cin >> n;
	vector<int> v(n); vector<int> b(n);
	for(auto &u : v){
		cin >> u;
		}
	for(auto &c : b){
		cin >> c;
		}
//	display(v);
//	display(b);
	if(is_sorted(v.begin(),v.end())){
		//cout << "Already sorted" << endl;
		cout << "Yes" << endl;
		return;
		}else{
			int sum = 0;
			for(int i = 0; i < b.size();i++){sum+=b[i];}
			if(sum == 0 || sum == n){
				cout << "No" << endl;
				return;
				}
		}
		cout << "Yes" << endl;
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
