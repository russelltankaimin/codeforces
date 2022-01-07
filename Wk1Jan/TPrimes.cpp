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



void solve() {
	int a, n = 1000001;
	long double b;
	cin >> a;
	vector<int> primes(n, 1);
	primes[0] = 0;
	primes[1] = 0;
	for (int i = 2; i < n; ++i) {
		if (primes[i] == 1) {
			int k = 2;
			for (int j = i * k; j < n; j+=i) {
				primes[j] = 0;
			}
		}
	}
	for (int i = 0; i != a; ++i) {
		cin >> b;
		double z = sqrt(b);
		if (z == (int)z) {
			if (primes[z] == 1) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}
		else {
			cout << "NO\n";
		}
	}
 
}






int main(){
	solve();
	return 0;
}
