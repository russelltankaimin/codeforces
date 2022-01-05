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
	int n; string s; cin >> n >> s;
	if(n%2!=0){
		cout << s[0] << s[1] << s[2];
		if(n == 3){return;}
		cout <<"-";
		}
	for(int i = (n % 2 == 0 ? 0 : 3); i < n - 2; i+=2){
		cout << s[i] << s[i+1] << "-";
		}
	cout << s[n-2] << s[n-1] << endl;
}

int main(){
	solve();
	return 0;
}
