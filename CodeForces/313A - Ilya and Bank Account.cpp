#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e6+3;
typedef double dd;
typedef pair<int, int> pairs;
typedef pair<char,string>pair2;
#define el '\n'

int main(){
    fast();
    string s;
    cin>>s;
    if(s[0]!='-')cout<<s<<el;
    else {
        int n1=s[s.size()-1]-'0',n2=s[s.size()-2]-'0';
        if(n1>=n2)s.erase(s.size()-1,1);
        else s.erase(s.size()-2,1);
        if(s.size()==2 && s[1]=='0'){
            cout<<"0"<<el;
        }
        else cout<<s<<el;
    }
 
}
