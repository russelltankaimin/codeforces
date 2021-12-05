#include<iostream>
#include<algorithm>
#include<numeric>
#include<map>
#include<string>
#include<vector>
#include<utility>
typedef long long ll;
using namespace std;
void solve(){
	int a = 0; int b = 0;
	int ans = 0;
	int t1,t2; cin >> t1 >> t2;
	if((t1-t2)%2!=0){
		cout<<-1<<endl;	
		return;
	}else{
		if(t1 == t2){
			cout << (t1 == 0 ? 0 : 1)<<endl;
			return ;
		}else{
			int d = t1 - t2;
			if(d > 0){
				a -= d/2;
				b += d/2;
				ans ++;
			}else{
				a += d/2;
				b -= d/2;
				ans++;
			}
		}
	}
	cout << ans+1 << endl;
}		

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
