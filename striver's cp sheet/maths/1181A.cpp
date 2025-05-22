//A. Chunga-Changa
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
        ll x,y,z;
        cin >> x >> y >> z;
        cout << (x + y) / z <<" ";
    if(max(x%z,y%z)){
        if(z-max(x%z,y%z) >min(x%z,y%z)){
            cout<<0;
        }
        else{
        cout<< z-max(x%z,y%z);
        }
    }
    else{
        cout<<0;
    }
}
    return 0;
}