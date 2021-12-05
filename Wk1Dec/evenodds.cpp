#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
int main(){
	ll t , p;
	cin >> t >> p;
	if (t%2==0){
		cout << (p <= t/2 ? 2*p - 1 : 2*p - t) << endl;
	}else{
		cout << (p <= t/2 + 1 ? 2*p - 1 : 2*(p-(t/2)-1)) << endl;
	}
    return 0;
}

