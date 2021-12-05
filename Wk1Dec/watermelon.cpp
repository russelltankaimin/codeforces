#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    string ans = n == 2 ? "NO" : n % 2 == 0 ? "YES" : "NO";
    cout<<ans;
    return 0;
}

