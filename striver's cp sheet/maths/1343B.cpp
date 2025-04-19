// 1343B - Balanced Array


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
        int n,i;
        cin>>n;
        if((n/2)%2!=0  || n%2!=0){cout<<"NO"<<endl;}
        else{
             cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                cout<<2*i<<" ";
            }
            for (i=1;i<n/2;i++){
                cout<<2*i-1<<" ";
            }
           cout<<2*(i+(n/2)/2)-1<<endl;
        }
    }
    return 0;
}