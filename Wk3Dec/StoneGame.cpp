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
	int t; cin >> t;
	int lo = 101; int hi = 0;
	int lidx = 0; int hidx = 0;
	for(int i = 0; i < t; i++){
		int c; cin >> c;
		if(c >= hi){
			hi = c;
			hidx = i;
		}
		if( c <= lo){
			lo = c;
			lidx = i;
		}
	}
	// Eliminate the item nearest to the edges
	int leftptr = lidx < hidx ? lidx : hidx;
	int rightptr = lidx > hidx ? lidx : hidx;
	int steps = 0;
	int start = 0; int end = t - 1;
	if(t - rightptr < leftptr + 1){
		steps += t - rightptr;
		end = rightptr - 1;
	}else{
		steps += leftptr + 1;
		start = leftptr + 1;
	}
	int finalptr = (start <= leftptr && leftptr <= end ? leftptr : rightptr);
	steps += min(finalptr - start + 1, end - finalptr + 1);
	cout << steps << endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
