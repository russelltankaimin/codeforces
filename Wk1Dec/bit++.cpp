#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
int main(){
    int n;
	ll ans = 0;
    cin >> n;
	string ops;
	while(n--){
		cin >> ops;
		ops = ops.at(1);
		if(ops.compare("+")==0){ans++;}
		else{ans--;}
	}
	cout << ans << endl;
    return 0;
}

