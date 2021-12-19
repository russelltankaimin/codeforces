#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

long double max(long double a, long double b){return a > b ? a : b;}

int main(){
	cout <<	setprecision(25) << fixed;
	int n , l; cin >> n >> l;
	vector<long double> a;
	bool hasZero = false;
	for(int i = 0; i < n ; i++){
		long double b; cin >> b;
		a.push_back(b);
		if(b == 0){hasZero = true;}
	}
	sort(a.begin(),a.end());
	long double ans = 0;
	for(int i = 1 ; i < n; i++){
		ans = max((a[i] - a[i-1])/2 , ans);
	}
	if(!hasZero){
		ans = max(a[0],ans);
	}
	ans = max(l - a.back(), ans);
	cout << ans << endl;
	return 0;
}
