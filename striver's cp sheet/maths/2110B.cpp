//  (B) Down with Brackets
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
        cin>>s;
         int c=0,d=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                c++;
            }
            else{
                c--;
            }
            if(c==0){d++;}
        }
        (d>1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}