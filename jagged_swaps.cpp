#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i < n + 1; i++) {
            cin >> arr[i];
        }
        
        // Correct mathematical logic for Jagged Swaps:
        // The array is only sortable if the first element is 1.
        if (arr[1] == 1) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}