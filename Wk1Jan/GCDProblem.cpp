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
	ll n ; cin >> n;
	if(n % 2 == 0){
		cout << 2 << " " << n-3 << " "<< 1 << endl;
		}else{
		ll a = (n-1)/2;
		if(a % 2 == 0){cout << a-1 << " " << a+1 << " " << 1 << endl;}
		else{cout << a - 2 << " " << a + 2 << " " << 1 << endl;}
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
