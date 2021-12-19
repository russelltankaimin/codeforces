#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
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

int main(){
	int n , m ; cin >> n >> m;
	vector<int> a;
	for(int i = 0; i < m ; i++){
		int b; cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	int ans = pow(10,9);
	for(int i = 0; i < m - n + 1; i++){
		ans = min(ans,a[i+n-1] - a[i]);
	}
	cout << ans << endl;
	return 0;
}
