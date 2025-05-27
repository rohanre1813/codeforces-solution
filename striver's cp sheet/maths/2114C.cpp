// C. Need More Arrays
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int g = 0;
        int p = INT_MIN;
        for (int i = 0; i < n; ++i) {
            
            if (arr[i] > p + 1) {
                g++;
                p = arr[i];
            }
        }

        cout << g << endl;
    }

    return 0;
}
