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
	ll x0 , n; cin >> x0 >> n;
	ll d = n % 4 == 0 ? 0 : (n % 4 == 1 ? n : (n % 4 == 2 ? -1 : -n - 1 ));
	if(x0 % 2 == 0){
		cout << x0 - d << endl;
		}else{
		cout << x0 + d << endl;
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
