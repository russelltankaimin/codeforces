#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int x;
	cin >> x;
	ll steps = 0;
	cout << (x / 5 + (x%5==0 ? 0 : 1)) << endl;
    return 0;
}

