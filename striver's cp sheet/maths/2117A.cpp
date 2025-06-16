//  (A) False Alarm

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
        int n,x,c=0,b=0;
        cin>>n>>x;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){cin>>v[i];}
        int y= find(v.begin(),v.end(),1)-v.begin();
        if(y+x>n){cout<<"YES"<<endl;}
        else if(find(v.begin()+y+x,v.end(),1)!=v.end()){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    return 0;
}