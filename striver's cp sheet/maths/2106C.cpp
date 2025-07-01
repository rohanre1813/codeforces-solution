// 2106C - Cherry Bomb
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
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n],c=0,ans=0,mini=INT_MAX,maxi=-1;
        for(int i=0;i<n;i++) {cin>>a[i];}
        for(int i=0;i<n;i++) {cin>>b[i];}
        for(int i=0;i<n;i++){if(a[i]!=-1 && b[i]!=-1){ans=a[i]+b[i];break;}else{c++;}}
        for(int i=0;i<n;i++){ if(a[i]==-1 || b[i]==-1){ mini=min(mini,max(a[i],b[i]));maxi=max(maxi,max(a[i],b[i]));
            if(a[i]>ans || b[i]>ans){ans=-1;} if(a[i]==-1){if(ans- b[i]>k)ans=-1;}if(b[i]==-1){if(ans- a[i]>k)ans=-1;}}
        else{ if(a[i]+b[i]!=ans){ans=-1;}}}
        if(c==n){cout<<(k+mini)-maxi +1<<endl;}
        else if(ans==-1){cout<<0<<endl;}
        else{cout<<1<<endl;}
    }
    return 0;
}