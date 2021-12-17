#include<bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
}
void yes(){
    cout<<"YES"<<el;
}
void no(){
    cout<<"NO"<<el;
}

int main() {
    fast();
    int t;
    string s;
    cin>>t;
    while (t--){
        cin>>s;
        if(s.size() % 2 || s[0]==')' || s[s.size()-1]=='(')no();
        else yes();
    }
 
}
