// B. Lady Bug
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
        int n,x=0,y=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        string c(n, ' '), d(n, ' ');
        for(int i=0;i<n;i++){
            if(i&1){c[i]=b[i];d[i]=a[i];}
            else{c[i]=a[i];d[i]=b[i];}
        }
        for(int i=0;i<c.length();i++){if(c[i]=='0')x++;}
        for(int i=0;i<d.length();i++){if(d[i]=='0')y++;}
        if(x>=ceil(c.length()/2.0)&& y>=(d.length()/2)){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        }
           return 0;
    }
 