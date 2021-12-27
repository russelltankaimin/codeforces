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

void solve(){
	
}

int main(){
	int n , m; cin >> n >> m;
	int total = n * m;
	// each move removes 2 sticks, one from horizontal, one from vertical
	// each move removes also (n-1)*(m-1) valid intersections
	bool akshat = false;
	while(total > 0 && n > 0 && m > 0){
		total -= n - (m - 1);
		n--;
		m--;
		akshat = !akshat;
	}
	cout << (akshat ? "Akshat" : "Malvika") << endl;
	return 0;
}
