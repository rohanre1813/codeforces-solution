// 507A - Amr and Music

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n],sum=0;
 multimap<int,int>mp;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    mp.insert({a[i], i}); 
  }
  int j=0,x=0;
for(auto i:mp){
  sum+= i.first;
   if(sum<=k){
    j++;
   }else break;
}
 cout<<j<<endl;
 for(auto l:mp){
  if(x!=j){
    cout<<l.second<<" ";
    x++;
  }
 }
 if(j!=0)cout<<endl;
}

