#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}

int main(){
	int k,l,m,n,d;
	cin>>k >> l >> m >> n >> d;
	int unharmed = 0;
	for(int i = 1; i <= d ; i++){
		if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0){
			unharmed++;
		} 
	}
	cout << d - unharmed << endl;
	return 0;
}
