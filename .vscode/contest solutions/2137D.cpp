// D - Replace with Occurrences
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);

    int t = 1;
    cin >> t;
    while (t--) {
        int n,c=0;
        cin >> n;
        vector<int> v(n), w(n+1,0), ans;
        for (auto &i:v) {cin>>i;w[i]++;}
        for (int i = 1; i < n + 1; i++) {
            if ((w[i] % i) != 0) {
                c++;
                break;
            }
        }

        if (c > 0) {
            cout << -1 << endl;
        } else {
            unordered_map<int, vector<int>> grp;
            for (int i = 0; i < n; i++) grp[v[i]].push_back(i);

            vector<int> a(n, -1);
            int label = 1;
            for (auto &p : grp) {
                int val = p.first;
                auto &idx = p.second;
                int pos = 0;
                for (int g = 0; g < (int)idx.size() / val; g++) {
                    for (int j = 0; j < val; j++) {
                        a[idx[pos++]] = label;
                    }
                    label++;
                }
            }
                for (int i = 0; i < n; i++) cout << a[i] << " ";
                cout<<endl;
        }
    }
    return 0;
}
