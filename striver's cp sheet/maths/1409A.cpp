// A. Yet Another Two Integers Problem

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
        int a,b;
        cin>>a>>b;
       cout<<abs(b-a)/10+(abs(b-a)%10!=0)<<endl;
     
    }
    return 0;
}