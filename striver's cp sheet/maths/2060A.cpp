// A. Fibonacciness
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
        int ans = 0;
    	int a[4];
    	for(int i=0;i<4;i++){cin>>a[i];}
    	for (int a3 = -200;a3 <= 200;a3++)
    	{
    		int count = 0;
    		if (a[0] + a[1] == a3){count++;}
			if (a[1] + a3 == a[2]){count++;}
			if (a3 + a[2] == a[3]){count++;}
			ans = max(ans,count);
		}
		cout << ans <<endl;
    }
    return 0;
}