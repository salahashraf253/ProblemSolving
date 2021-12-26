#include <bits/stdc++.h>
#define el "\n"
#define F first
#define S second
#define loop(n) for(int i=0 ;i<n;i++)
#define loop2(first,last)for(int i=first;i<=last;i++)
#define nested_loop(n,m)for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define all(vec) vec.begin(), vec.end()
#define start ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef double dd;
typedef long double ld;
using namespace std;

void yes(){
    cout<<"YES\n";
}
void no(){
    cout<<"NO\n";
}

int main() {
    start;
    int t;
    cin>>t;
    string s;
    while (t--){
        cin>>s;
        if(s.size()%2==1)no();
        else {
            bool flag=1;
            int half=s.size()/2;
            for(int i=0;i<s.size()/2;i++,half++){
                if(s[i]!=s[half]){
                    flag=0;
                    break;
                }
            }
            if(flag)yes();
            else no();
        }
    }
}
