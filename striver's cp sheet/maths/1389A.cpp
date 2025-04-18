// A - LCM Problem


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long l,r;
  cin>>t;
  while(t--){
   cin>>l>>r;
   if(l*2>r){cout<<-1<<" "<<-1<<endl;}
   else{cout<<l<<" "<<l*2<<endl;}
  }
}
