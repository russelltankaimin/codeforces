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
	int t; string m ; cin >> t >> m;
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i = 0; i < m.length(); i++){
		int b = a.find(m[i]);
		cout << a[(b+t)%26];
	}
}

int main(){
	solve();
	return 0;
}
