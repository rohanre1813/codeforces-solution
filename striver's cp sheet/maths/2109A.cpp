// A. It's Time To Duel
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
        int n,c=0,ans=0;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){ 
            cin >> a[i];
        if(a[i]==0){c++;}
        else{c=0;}
        if(c>1){ans=1;}
}
        if(find(a,a+n,0)==a+n){ans=1;}
        (ans==1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}