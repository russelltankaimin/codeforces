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

void solve(){

}

int main(){
	int t;
	cin>>t;

	int r = 1;
	while (r * 5 < t)
	{
		t -= r * 5;
		r *= 2;
	}

	string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cout << names[(t - 1) / r] << endl;

	return 0;
}
