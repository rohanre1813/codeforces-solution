// B. Shrink
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
        int n;
        cin>>n;
        int a[n],j=0;
        for(int i=2;i<=n/2;i++){a[j]=i;j++;}
        a[j]=n;j++;
        for(int i=n/2+1;i<n;i++){a[j]=i;j++;}
        a[j]=1;
        if(n==3){cout<<1<<" "<<3<<" "<<2<<endl;}
        else{
        for(int i=0;i<n;i++){cout<<a[i]<<" ";}
        cout<<endl;
        }
    }
    return 0;
}