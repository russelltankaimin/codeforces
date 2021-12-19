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
	int ans = t % 2 == 1;
	bool odd = t % 2 == 1;
	if(odd){t-=3;}
	int a = t / 2;
	cout << a + odd << endl;
	for(int i = 0; i < a; i++){
		cout << 2 << " ";
	}
	if(odd){cout << 3;}
	return 0;
}
