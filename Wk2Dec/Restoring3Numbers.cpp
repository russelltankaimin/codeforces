#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

int main(){
	vector<int> a;
	int hi = 0;
	for(int i = 0; i < 4; i++){
		int b; cin >> b;
		a.push_back(b);
		hi = max(hi,b);
	}
	for(int c : a){
		if(c != hi){
			cout << hi - c << " ";
		}
	}
	cout << "" << endl;
	return 0;
}
