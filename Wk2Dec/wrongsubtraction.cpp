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
	int a , b;
	cin>>a>>b;
	while(b--){
		if(a % 10 == 0){
			a /= 10;
		}else{
			a--;
		}
	}
	cout << a << endl;
	return 0;
}
