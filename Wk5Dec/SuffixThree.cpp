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
	string s; cin >> s;
	int l = s.length();
	if(s[l-2] == 'p' && s[l-1] == 'o'){
		cout << "FILIPINO" << endl;
		}else if(l >= 5 &&
						 s[l-5] == 'm' &&
						 s[l-4] == 'n' &&
						 s[l-3] == 'i' &&
						 s[l-2] == 'd' &&
						 s[l-1] == 'a'){
		cout << "KOREAN" << endl;
		}else{
		cout << "JAPANESE" << endl;
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
