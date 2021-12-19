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
	int t; string a; cin >> t >> a;
	string ans = "";
	int skip = 0;
	int tag = 1;
	for(int i = 0; i < t; i++){
		if(skip == 0){
			ans += a[i];
			skip = tag;
			tag++;
		}else{
			skip--;
			continue;
		}
	}
	cout << ans << endl;
	return 0;
}
