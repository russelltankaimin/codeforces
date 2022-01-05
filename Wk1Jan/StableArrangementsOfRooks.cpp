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
	int n , a; cin >> n >> a;
	if(n == a){
		if(n == 1){cout << "R" << endl;}
		else{cout << -1 << endl;}
		return;}else{
		int hi;
		if(n%2==0){hi = n/2;}
		else{hi = (n+1)/2;}
		if(a > hi){cout << -1 << endl;return;}
		int k = 0;
		for(int i = 0; i < n ; i++){
			for(int j = 0; j < n;j++){
					if(i%2==0){
						if(i == j && k < a){cout << "R";k++;}
						else{cout <<".";}
						}else{
						cout << ".";
						}
				}
			cout << endl;
			}
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
