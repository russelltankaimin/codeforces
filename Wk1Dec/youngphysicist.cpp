#include <iostream>
#include <string>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int abs(int x){
	return x < 0 ? -1 * x : x;
}

int main(){
	int n;
	cin >> n;
	int v1,v2,v3;
	int e1 = 0; int e2 = 0; int e3 = 0;
	for(int i = 0; i < n ; ++i){
		cin >> v1 >> v2 >> v3;
		e1 += v1;
		e2 += v2;
		e3 += v3;
	}
	if(e1 != 0 || e2 != 0 || e3 != 0){
		cout <<"NO"<<endl;
	}else{
		cout << "YES"<<endl;
	}
    return 0;
}

