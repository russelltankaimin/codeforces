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
	int a, b; cin >> a >> b;
	cout << min(a,b) << " ";
	int o = min(a,b);
	a -= o; b-= o;
	int left = a == 0 ? b/2 : a/2;
	cout << left << endl;
	return 0;
}
