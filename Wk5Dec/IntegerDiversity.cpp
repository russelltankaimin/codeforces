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

template<typename T>
void display(T a){
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

bool found(vector<int> a , int b){
		for(auto c : a){
				if(c == b){return true;}
			}
			return false;
	}

void solve(){
	int t; cin >> t;
	vector<int> a;
	map<int,int> count;
	for(int i = 0; i < t; i++){
		int b ; cin >> b;
		a.push_back(b);
		count[b]++;
		}
	int ans = 0;
	for(auto [key, value] : count){
			if(key == 0 && value > 0){
				ans++;
				}else if(key < 0){
					if(count[-key] > 0){
							continue;
						}else{
							if(value >= 2){
								ans+=2;
								}else{
								ans++;
								}
						}
				}else if(value != 0){
					if((value >= 2 || count[-key] > 0) && value != 0){
						ans+=2;
						}else{
						ans++;
						}
				}else{
					continue;
					}
		} 	
	cout << ans << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
