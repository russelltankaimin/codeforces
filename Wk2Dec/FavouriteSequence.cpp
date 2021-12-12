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
	int n; cin >> n;
	vector<int> a;
	int p = n;
	while(p--){
		int b; cin >> b;
		a.push_back(b);
	}	
	int ptr1 = 0; int ptr2 = n - 1;
	if(n%2 == 0){
		for(int i = 0; i < n/2; i++){
			cout << a[i] << " "<< a[n-1-i]<<" ";
		}
		cout <<""<<endl;
		return;
	}
	while(ptr1 != ptr2){
		cout << a[ptr1] << " " << a[ptr2] << " ";
		ptr1++;
		ptr2--;
	}
	if(n%2 != 0){
		cout << a[ptr1] << endl;
	}
	return ;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
