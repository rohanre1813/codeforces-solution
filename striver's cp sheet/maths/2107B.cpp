// B. Apples in Boxes
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
        ll n,k,sum=0;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
        ll x=*max_element(a.begin(),a.end());
        ll y=*min_element(a.begin(),a.end()),w=count(a.begin(),a.end(),x);
        if(x-y>k+1){
           cout<<"Jerry"<<endl;
        }
        else if(x-y==k+1){
            if(w==1){ if(sum%2==0){cout<<"Jerry"<<endl;} else {cout<<"Tom"<<endl;}}
            else {cout<<"Jerry"<<endl;}
        }
        else{
            if(sum%2==0){cout<<"Jerry"<<endl;}
            else {cout<<"Tom"<<endl;}
        }
    }
    return 0;
}