#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
int main()
{
    int n ;
	int t , p, a ;
	ll ans = 0;
    cin >> n;
	while(n--){
		cin >> t >> p >> a;
		if(t + p + a >= 2){ans ++;}
	}
	cout << ans << endl;
    return 0;
}

