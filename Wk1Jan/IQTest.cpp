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
	int t; cin >> t;
	vector<int> even , odd;
	for(int i = 1; i < t + 1; i++){
		int b; cin >> b;
		if(b % 2 == 0){
			even.push_back(i);
			}else{
			odd.push_back(i);
			}
		}
	int ans = even.size() == 1 ? even[0] : odd[0];
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}
