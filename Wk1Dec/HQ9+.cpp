#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;
int main(){
	string x;
	cin >> x;
	ll len = x.length();
	for(int i = 0; i < len; ++i){
		if(
			x[i] == 'H' || x[i] == 'Q' || x[i] == '9'
		){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
    return 0;
}

