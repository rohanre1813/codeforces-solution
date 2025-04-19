// A. Floor Number 1426A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,ans=1;
        cin>>n>>x;
        if(n<=2){ans=1;}
        else{
            n-=2;
        ans+=n/x;
        if(n%x!=0){ans+=1;}
        }
        cout<<ans<<endl;
    }
return 0;
}