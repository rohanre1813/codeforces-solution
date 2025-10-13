// C. Maximum Even Sum
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
        ll a,b,ans=0;
        cin>>a>>b;
        if(b&1){
            ans=a*b +1 ;
        }
        else{
            ans=a*(b/2) + b/(b/2);
        }
        if(ans&1){ans=-1;}
        cout<<ans<<endl;
    }
    return 0;
}