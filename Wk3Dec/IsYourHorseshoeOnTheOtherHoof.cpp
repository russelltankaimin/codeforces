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
	set<int> a;
	for(int i = 0; i < 4; i++){
		int b; cin >> b;
		a.insert(b);
	}
	cout << 4 - a.size() << endl;
	return 0;
}
