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
	int64_t n , m; cin >> n >> m;
	int64_t ans = 0;
	int64_t curr = 1;
	for(int64_t i = 0 ; i < m; i++){
		int64_t b ; cin >> b;
		if(curr <= b){
			ans += b - curr;
		}else{
			ans += (b + n) - curr;
		}
		curr = b;
	}
	cout << ans << endl;
	return 0;
}
