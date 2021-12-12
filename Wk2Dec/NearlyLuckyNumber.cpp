#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

int main(){
	int64_t t;
	cin>>t;
	int count = 0;
	while(t > 0){
		int bit = t % 10;
		if(bit == 4 || bit == 7){
			count++;
		}
		t/=10;
	}
	cout << (count == 4 || count == 7 ? "YES" : "NO") << endl;
	return 0;
}
