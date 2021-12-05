#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int k,n,w;
	cin >> k >> n >> w;
	int ans = ((w*(w+1))/2)*k - n;
	cout << (ans <= 0 ? 0 : ans) << endl;
    return 0;
}

