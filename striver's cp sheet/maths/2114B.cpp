// B. Not Quite a Palindromic String

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
        string s;
        int n,k;
        cin>>n>>k;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){b++;}
            if(s[i]=='0'){c++;}
        }
            a=(n-(k*2))/2;
           if(b-a<0||c-a<0||(b-a)%2!=0 || (c-a)%2!=0){cout<<"NO"<<endl;}
       else{cout<<"YES"<<endl;}

    }
    return 0;
}