#include <iostream>
#include <string>
#include <numeric>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
    double n,m,a ;
    cin >> n >> m >> a;
	double ans = ceil(n/a) * ceil(m/a);
	cout << (ll) ans << endl;
    return 0;
}

