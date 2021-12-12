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

int abs(int x){return x >= 0 ? x : -x;}

int main(){
	int b,g;
	vector<int> boy; vector<int> girl;
	cin >> b;
	while(b--){
		int c; cin >> c;
		boy.push_back(c);
	} 
	cin >> g;
	while(g--){
		int d; cin >> d;
		girl.push_back(d);
	}
	sort(boy.begin(),boy.end());
	sort(girl.begin(),girl.end());
	int ptr1 = 0; int ptr2 = 0; int ans = 0;
	while(ptr1 < boy.size() && ptr2 < girl.size()){
		if( abs( boy[ptr1] - girl[ptr2]	) <= 1){
			ans++;
			ptr1++;
			ptr2++;
		}else if(boy[ptr1] < girl[ptr2]){
			ptr1++;
		}else{
			ptr2++;
		}
	}
	cout << ans << endl;
	return 0;
}
