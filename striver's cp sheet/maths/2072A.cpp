// A. New World, New Me, New Array
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
        int  n,k,p;
        cin>>n>>k>>p;
        int ans=abs(k/p);
        (k%p!=0)?ans+=1:ans;
        if(ans<=n){
            cout<<ans<<endl;
        }
        else{cout<<"-1"<<endl;}
    }
    return 0;
}