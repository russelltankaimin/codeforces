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
	int t;
	cin>>t;
	if(t >= 0){
		cout << t << endl;
	}else{
		int p = t/10;
		int q = t%10 +(t/100)*10;
		cout << max(p,q) << endl;
	}
	return 0;
}
