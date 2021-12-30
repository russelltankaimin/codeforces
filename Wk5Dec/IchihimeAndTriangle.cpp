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
	int a, b, c, d; cin >> a >> b >> c >> d;
	cout << b << " "<< c <<" "<< c << endl;	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
