/*#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());

    // Step 2: Check the balance conditions using indices
    // The first half must match the smallest element, 
    // and the second half must match the largest element.
    if (a[0] == a[n / 2 - 1] && a[n / 2] == a[n - 1]) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    }
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> freq;
        for (int i=0;i<n;i++){
            int x; cin>>x;
            freq[x]++;
        }

        if (freq.size() > 2) {
            cout << "No\n";
        } else if (freq.size() == 1) {
            cout << "Yes\n";
        } else {
            // exactly 2 distinct values
            auto it = freq.begin();
            int c1 = it->second;
            it++;
            int c2 = it->second;
            int h1 = n/2, h2 = n - n/2;
            if ((c1==h1 && c2==h2) || (c1==h2 && c2==h1)) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}