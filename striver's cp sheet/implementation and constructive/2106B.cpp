//  (B) St. Chroma

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
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            if(i==x){continue;}
            else{cout<<i<<" ";}
        }
        if(x<n)cout<<x<<endl;else cout<<endl;
    }
    return 0;
}