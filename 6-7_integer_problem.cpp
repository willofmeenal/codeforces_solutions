#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        vector<int> arr(7);
        for (int i=0;i<7;i++){
            cin>>arr[i];
        }
        int max_value=*max_element(arr.begin(),arr.end());
        int sum=0;
        for (int i=0;i<7;i++){
                sum+=arr[i];
        }
        cout<<-sum+(2*max_value)<<"\n";
    }
    return 0;
} 