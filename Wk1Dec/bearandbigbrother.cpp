#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	ll yrs = 0;
	while(a <= b){
		a *= 3;
		b *= 2;
		yrs ++;
	}
	cout << yrs << endl;
    return 0;
}

