#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define el '\n'
#define pi acos(-1)
#define Salah ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
int main() {
    Salah
    int n;
    cin>>n;
    string s;
    while (n--){
        cin>>s;
        if(s.size()<=10){
            cout<<s<<el;
        }
        else {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<el;
        }
    }
}
