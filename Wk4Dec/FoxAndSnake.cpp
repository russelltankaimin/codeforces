#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<bitset>
#include<iomanip>
#include<string>
#include<vector>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;

void solve(int a, bool b){
	if(!b){
		for(int i = 0 ; i < a - 1; i++){
			cout << ".";
		}
		cout <<"#"<<endl;
	}else{
		cout << "#";
		for(int i = 0; i < a-1;i++){
			cout << ".";
		}
		cout << "" << endl;
	}
}

int main(){
		int a,b; cin >> a >> b;
		for(int i = 1; i < a+1; i++){
				if(i%2 != 0){
						for(int j = 0; j < b; j++){
								cout << "#";
						}
						cout << "" << endl;
				}else{
						solve(b,i%4==0);
				}
		}
		return 0;
}
