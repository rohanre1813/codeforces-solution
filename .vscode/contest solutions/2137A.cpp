// A - Collatz Conjecture
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
        int k,x;
        cin>>k>>x;
        for(int i=0;i<k;i++){x*=2;}
        cout<<x<<endl;
    }
    return 0;
}