//D. Destruction of the Dandelion Fields
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
        ll n,sum=0;
        cin>>n;
        vector<ll>v(n+1),w;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]&1){w.push_back(v[i]);}
            else{sum+=v[i];}
    }

    if(w.size()==0){cout<<0<<endl;continue;}
    sort(w.begin(),w.end());
    for(int i=0;i<w.size()/2;i++){w[i]=0;}
    for(int i=0;i<w.size();i++){sum+=w[i];}
    cout<<sum<<endl;
}
return 0;
}