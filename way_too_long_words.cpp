#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s="";
    for (int i=1;i<=n;i++){
        cin>>s;
        if (s.length()>10){
            cout<<s[0]<<(s.length() - 2)<<s[s.length()-1];
        }
        else
            cout<<s;
        cout<<endl;
    }
    return 0;
}