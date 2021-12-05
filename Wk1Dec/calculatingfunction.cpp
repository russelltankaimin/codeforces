#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define ll long long
using namespace std;

int main(){
	ll t;
	cin >> t;
	ll ans = 0;
	if(t % 2 == 0){
		ans = (t*t + 2*t)/4 - t*t/4;
	}else{
		ans = (t/2)*(t+1)/2 - ((t/2)+1)*(1+t)/2;
	}
	cout << ans << endl;
    return 0;
}

