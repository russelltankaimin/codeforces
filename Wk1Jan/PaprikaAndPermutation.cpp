#include "/Users/russelltankaimin/bits/stdc++.h"
//#include "bits/stdc++.h"
/*
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
#include<deque>
#include<array>
#include<utility>
#include<cmath>
#include<cctype>
*/
using namespace std;
typedef long long ll;
typedef bitset<22> BITS;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define ALL(x) x.begin(),x.end()
#define UNIQUE(x) (x).resize(unique(ALL(x)) - x.begin())
template<typename T,typename U>
void debug(pair<T,U> a, bool submit){
	if(!submit){
		cout <<"[ ";
	}
	for(int i = 0; i < a.size();i++){
		cout << "(" << a[i].first << "," << a[i].second <<")" << " ";
	}
		cout <<(!submit ? " ]" : "")<< endl;
}
template<typename T>
void debug(T a, bool submit){
	if(!submit){
		cout <<"[ ";
	}
	for(int i = 0; i < a.size();i++){
		cout << a[i] << " ";
	}
		cout <<(!submit ? " ]" : "")<< endl;
}

void solve(){
	int n; cin >> n;
	vector<bool> b(n+1,false);
	b[0] = true;
	vector<int> left;
	for(int i = 0; i < n;i++){
		int a; cin >> a;
		if(1<= a && a <=n){
			if(b[a]){
				left.push_back(a);
			}else{
				b[a] = true;
			}
		}else{
			left.push_back(a);
		}
	}
//	debug(left,false);
	int ans = 0;
	int curr = 0;
	sort(ALL(left));
	for(int i = 1; i < n+1;i++){
		if(!b[i]){
			int p = left[curr];
			if(p < i || i + 1 == p || 2*i == p){
				cout << -1 << endl;
				return;
			}else{
				ans++;
				curr++;
			}
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
/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t>0){
        t--;
        int n;
        cin >> n;
        set<int> st;
        for(int i=1;i<=n;i++){st.insert(i);}
        vector<int> rem;
        for(int i=0;i<n;i++){
            int v;
            cin >> v;
            if(st.find(v)!=st.end()){st.erase(v);}
            else{rem.push_back(v);}
        }
        sort(rem.begin(),rem.end());
        reverse(rem.begin(),rem.end());
        int pt=0;
        bool err=false;
        for(auto &nx : rem){
            auto it=st.end();
            it--;
            int ctg=(*it);
            if(ctg>(nx-1)/2){err=true;break;}
            st.erase(it);
        }
        if(err){cout << "-1\n";}
        else{cout << rem.size() << '\n';}
    }
    return 0;
}

*/
