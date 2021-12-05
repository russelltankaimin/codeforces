#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main(){
	int M , N;
	cin >> M >> N;
	int ans = (M/2)*N + (N/2)*(M%2);
	cout << ans << endl;
    return 0;
}

