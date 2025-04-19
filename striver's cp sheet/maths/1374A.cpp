// 1374A - Required Remainder
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int x,y,n;
       cin>>x>>y>>n;
      long long k=(n-y);
       cout<<n-k%x<<endl;
       
    }
return 0;
}