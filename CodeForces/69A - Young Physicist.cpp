#include<bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
}

int main() {
    fast();
    int n,X=0,Y=0,Z=0,x,y,z;
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        X+=x;
        Y+=y;
        Z+=z;
    }
    if(!X&&!Y&&!Z)
      cout<<"YES\n";
    else 
      cout<<"NO\n";
}

