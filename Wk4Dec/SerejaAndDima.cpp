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
	int n; cin >> n;
	vector<int> a(n);
	for(auto &b : a){
		cin >> b;
	}
	int left = 0; int right = n - 1;
	int S = 0; int D = 0;
	bool S_turn = true;
	while(left <= right){
		int hi = max(a[left], a[right]);
		if(a[left] == hi){
			left++;
		}else{
			right--;
		}
		if(S_turn){
			S+= hi;
			S_turn = false;
		}else{
			D+=hi;
			S_turn = true;
		}
	}
	cout << S << " " << D << endl;
	return 0;
}
