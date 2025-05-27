// A. Square Year
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
        float  s;
        cin>>s;
       float a=sqrt(s);
       int b=sqrt(s);
       if(s==1){cout<<"0"<<" "<<"1"<<endl;}
      else  if(a==b){cout<<int(a/2)<<" "<<a-int(a/2)<<endl;}
       else{cout<<"-1"<<endl;}
        
    }
    return 0;
}