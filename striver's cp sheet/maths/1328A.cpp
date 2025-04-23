// A. Divisibility Problem


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
        ll a,b;
        cin>>a>>b;
        if(a%b==0){cout<<0<<endl;}
        else{cout<<b-(a%b)<<endl;}
    }
    return 0;
}