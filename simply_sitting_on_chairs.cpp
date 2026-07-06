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
        vector<int> chairs(n+1);
        chairs[0]=0;
        for (int i=1;i<=n;i++){
            cin>>chairs[i];
        }
        unordered_set<int> seen;
        int max_1=0;
        for (int i=1;i<=n;i++){
            if(seen.count(i)==0){
                max_1++;
            }
            seen.insert(chairs[i]);
        }
        cout<<max_1<<"\n";
    }
    return 0;
} 