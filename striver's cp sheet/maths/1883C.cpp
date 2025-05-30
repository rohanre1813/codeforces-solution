// C. Raspberries
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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int ans=k,e=0,o=0;
        for (int i = 0; i < n; i++){cin >> a[i];}
        for(int i=0;i<n;i++){
            int rem=  k-(a[i]%k);
            if(a[i]%k==0)rem=0;
            (a[i]%2)? o++ : e++;
            ans=min(ans,rem);
        }
        if(k!=4){cout<<ans<<endl;}
        else{
           if(e>1){e=0;}else if(e==0){e=2;}
           cout<<min(ans,e)<<endl;

        }
    }
    return 0;
}