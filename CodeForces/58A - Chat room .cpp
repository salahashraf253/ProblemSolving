#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,h="hello";
    cin>>s;
    int ctr=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==h[ctr])
          ctr++;
    }
    if(ctr==5)
      cout<<"YES";
    else 
      cout<<"NO";
}
