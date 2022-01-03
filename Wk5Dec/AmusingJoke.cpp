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
	string a, b, c; cin >> a >> b >> c;
	if(a.length() + b.length() != c.length()){
		cout << "NO" << endl;
		}else{
		sort(ALL(c));
		a += b;
		sort(ALL(a));
		cout<< (a == c ? "YES" : "NO" ) << endl;
		}
}

int main(){
	solve();
	return 0;
}
