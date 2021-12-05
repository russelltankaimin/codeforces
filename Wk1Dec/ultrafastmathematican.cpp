#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	int len = s1.length();
	string ans = "";
	for(int i = 0 ; i < len; i++){
		// can use xor but still lazy
		if(s1[i] != s2[i]){ans+="1";}
		else{ans+="0";}
	}
	cout << ans << endl;
    return 0;
}

