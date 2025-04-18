
// 1296A - Array with Odd Sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,n;
 cin>>t;
 while(t--){
  cin>>n;
  int a[n],c=0,d=0;
  for(auto i:a){
    cin>>i;
    if(i%2==0){c++;}
    else{d++;}
  }
if(c!=0 && d!=0){cout<<"YES"<<endl;}
else if(c==0 && d%2==0){cout<<"NO"<<endl;}
else if(c==0 && d%2!=0){cout<<"YES"<<endl;}
else if(c!=0 && d==0){cout<<"NO"<<endl;}    
 }  
  }

