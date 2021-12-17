#include<bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
}
int main() {
    fast();
    int t,a,b;
    cin>>t;
    while (t--) {
        cin >> a >> b;
        cout << min ({a,b,(a+b)/3})<<"\n";
    }
}
