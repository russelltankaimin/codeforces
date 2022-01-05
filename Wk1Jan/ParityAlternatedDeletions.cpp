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
#define rsort(x) sort(ALL(x),[](typename T a, T b){return a > b;})


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
	vector<int> ODD, EVEN;
	for(int i = 0; i < n; i++){
		int b; cin >> b;
		if(b % 2 == 0){
			EVEN.push_back(b);
		}else{
			ODD.push_back(b);
		}
	}
	sort(ALL(ODD)); sort(ALL(EVEN));
	int m = min(ODD.size(),EVEN.size());
	for(int i = 0; i < m; i++){
		ODD.pop_back();
		EVEN.pop_back();
		}
	if(ODD.size() != 0){ODD.pop_back();}
	if(EVEN.size() != 0){EVEN.pop_back();}
	int s = 0;
	for(int i = 0; i < ODD.size(); i++){
		s+=ODD[i];
	}
	for(int i = 0; i < EVEN.size(); i++){
		s+=EVEN[i];
	}
	cout << s << endl;
}

int main(){
	solve();
	return 0;
}
