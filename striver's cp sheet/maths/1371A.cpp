// 1371A - Magical Sticks
// try using snippets which will be more productive and also download vs-code extension called cph judge by divyanshu agarwal
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n;
        cin>>n;
        cout<<n/2 +n%2<<endl;
    }
    return 0;
}