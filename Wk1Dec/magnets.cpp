#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int t;
	vector<string> m;
	cin >> t;
	string p;
	while(t--){
		cin >> p;
		m.push_back(p);
	}
	int ans = 1;
	for(int i = 1; i < m.size(); i++){
		if(m[i] != m[i-1]){
			ans++;
		}
	}
	cout << ans << endl;
    return 0;
}

