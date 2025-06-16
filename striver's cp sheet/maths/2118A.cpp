// A. Equal Subsequences
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
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=k;i++){cout<<1;}
        for(int i=1;i<=n-k;i++){cout<<0;}
        cout<<endl;
    }
    return 0;
}