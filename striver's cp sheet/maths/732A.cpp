// A. Buy a Shovel

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int k,r;
        cin>>k>>r;
        int digit=k%10,ans=0;
        for(int i=1;i<10;i++){
            if((digit*i)%10==r || (digit*i)%10==0){
                ans=i;
                break;
            }
        }
        cout<<ans;
    }
    return 0;
}