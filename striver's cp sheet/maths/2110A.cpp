// A. Fashionable Array

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0); cin.sync_with_stdio(0);
    cout.tie(0); cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int c = 0,d=0;
        for(int i = 0; i < n; i++){
           
                if((a[0]+a[n-1-i])%2!=0){c++;}
                else{break;}
                if((a[i]+a[n-1])%2!=0){d++;}
                else{break;}
        
        }
        cout <<min(c,d)<< endl;
    }
    return 0;
}
