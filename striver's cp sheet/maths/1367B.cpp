// 1367B - Even Array
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
        int n,c=0,d=0,f=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((i%2==0 && a[i]%2!=0)||(i%2!=0 && a[i]%2==0)){
               c++;   
            }
            if(a[i]%2==0){d++;}
            else{f++;}
        }
        if(d==n/2 +n%2 && f==n/2){cout<<c/2<<endl;}
        else{cout<<-1<<endl;}

    }
    return 0;
}