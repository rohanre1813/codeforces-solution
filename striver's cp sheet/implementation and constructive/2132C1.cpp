// C1. The Cunning Seller (easy version)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t=1;
    cin>>t;
    while(t--){
        vector<ll> v,p(20,1);
        ll n,ans=0;
        cin>>n;
        for(int i=1;i<=19;i++) p[i]=p[i-1]*3;
        for(int i=0;i<=19;i++){
            ll x=p[i]*3+p[i]*i/3;
            v.push_back(x);
        }
        ll x=n;
        for(int i=19;i>=0;i--){
            while(x>=p[i]){
                x-=p[i];
                ans+=v[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}