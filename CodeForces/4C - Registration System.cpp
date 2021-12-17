#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    map<string,int>mp;
    cin>>n;
    string s;
    while (n--){
        cin>>s;
        if(!mp[s]) {
            cout << "OK\n";
            mp[s]++;
        }
        else {
            cout<<s<<mp[s]++<<"\n";
        }
    }
}
