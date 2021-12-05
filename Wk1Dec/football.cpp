#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	string t;
	cin >> t;
	int acc = 1;
	string bit;
	for(int i = 1; i < t.size(); i++){
		if(acc>=7){
			cout << "YES" << endl;
			return 0;
		}
		if(t[i] == t[i-1]){
			acc++;
		}else{
			acc = 1;
		}
	}
	cout << (acc >= 7 ? "YES":"NO") << endl;
    return 0;
}

