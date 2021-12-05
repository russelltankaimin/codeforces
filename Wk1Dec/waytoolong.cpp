#include <iostream>
#include <string>
using namespace std;
void solve(){
	string word;
	cin >> word;
	int len = word.length();
	if(len <= 10){
		cout << word << endl;
	}else{
		cout << word.at(0)<<(len-2)<<word.at(len-1) << endl;
	}


}
int main()
{
    int n ;
    cin >> n;
	while(n--){
		solve();
	}
    return 0;
}

