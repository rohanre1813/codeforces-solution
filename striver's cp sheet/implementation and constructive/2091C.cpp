// C. Combination Lock
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
        int n,x=0;
        cin>>n;
         vector<int> a(n,0);
        if(n&1){

            for(int i=0;i<=n/2;i++){
                a[i]=2*i+1;
                x=i;
            }
            for(int i=x+1;i<n;i++){a[i]=2*(i-x);}
        
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        
            else {
                cout<< -1 << endl;
            }
        }
            return 0;
    }

                                                          