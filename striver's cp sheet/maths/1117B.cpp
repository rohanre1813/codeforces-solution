// 1117B - Emotes
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
     ll  arr[n];
     for(auto &x: arr)
     {
         cin>>x;
     }
     sort(arr,arr+n);   
     reverse(arr,arr+n);
cout<<arr[1]*(m/(k+1))+arr[0]*(m-(m/(k+1)));
    }
    return 0;
}