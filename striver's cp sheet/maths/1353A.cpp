// 1353A - Most Unstable Array
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
        long long n,m,ans=0;
        cin>>n>>m;
        if(n==1){ans=0;}
        else if(n==2){ans=m;}
        else{ans=2*m;}
        cout<<ans<<endl;
    }
    return 0;
}