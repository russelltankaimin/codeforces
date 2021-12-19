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
	int t;
	cin>>t;
	string ans = "";
	for(int i = 0; i < t+1; i++){
		if(i % 2 == 0){
			ans += "I hate";
		}else{
			ans += "I love";
		}
		if(i == t - 1){break;}
		ans += " that ";
	}
	cout << ans << " it" << endl;
	return 0;
}
