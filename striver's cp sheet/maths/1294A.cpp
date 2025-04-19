// 1294A - Collecting Coins
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a[3],x;
        for(int i=0;i<3;i++){cin>>a[i];}
        cin>>x;
        sort(a,a+3);
        int  ans= (a[2]-a[1])+(a[2]-a[0]);
    if(x>=ans){
        x-=ans;
        if(x==0 || x%3==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    else{cout<<"NO"<<endl;}
}
return 0;
}