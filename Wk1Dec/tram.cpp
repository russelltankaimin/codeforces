#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int s,i,o;
	cin >> s;
	int p = 0;
	int ans = 0;
	while(s--){
		cin >> o >> i;
		p-=o;
		p+=i;
		ans = max(p,ans);
	}
	cout << ans << endl;
    return 0;
}

