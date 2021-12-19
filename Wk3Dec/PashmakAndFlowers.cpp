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
int64_t max(int64_t a, int64_t b){
	return a > b ? a : b;
}
int64_t min(int64_t a, int64_t b){
	return a > b ? b : a;
}
int main(){
	int n ; cin >> n;
	vector<int64_t> a(2*pow(10,6)+1,0);
	int64_t diff = 0;
	int64_t hi = 0; int64_t lo = 2*pow(10,5)+1;
	for(int i = 0; i < n; i++){
		int64_t b; cin >> b;
		a[b]++;
		hi = max(hi,b);
		lo = min(lo,b);
	}
	diff = hi - lo;
	cout << diff << " ";
	int64_t ans2 = 0;
	for(int i = 0; i < 2*pow(10,6); i++){
		if(a[i+diff] != 0 && a[i] != 0){
			ans2 +=  a[i] * a[i+diff];
		}
	}
	cout << ans2 << endl;
	return 0;
}
