// A. Shashliks
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios::sync_with_stdio(0);cin.tie(0);
int t;cin>>t;
while(t--){
       ll k,a,b,x,y,ans=0;
       cin>>k>>a>>b>>x>>y;
     if(x<=y){
     if(k>=a){
         ll c=(k-a)/x+1;
         ans+=c;k-=c*x;}
     if(k>=b){
         ll c=(k-b)/y+1;
         ans+=c;}
        }
         else{
             if(k>=b){
                  ll c=(k-b)/y+1;
                   ans+=c;k-=c*y;}
         if(k>=a){
                 ll c=(k-a)/x+1;
                  ans+=c;}
       }
             cout<<ans<<endl;
}
return 0;
}
