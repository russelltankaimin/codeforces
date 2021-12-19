#include<iostream>
#include<algorithm>
#include<iterator>
#include<numeric>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
void solve(){
	
}
bool isBeautiful(int p){
	set<int> a;
	for(int i = 0; i < 4; i++){
		a.insert(p % 10);
		p /= 10;
	}
	return a.size() == 4;
}
int main(){
	int p;
	cin >> p;
	do{
		p++;
	}while(!isBeautiful(p));	
	cout << p << endl;
	return 0;
}
