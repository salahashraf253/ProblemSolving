#include<bits/stdc++.h>
using namespace std;
void fast(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
}
bool not_vowel(char c){
    if(!strchr("AOYEUIaoyeui",c))return false;
    return true;
}
int main() {
    fast();
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(!not_vowel(s[i])){
            cout<<"."<<(char)(tolower(s[i]));
        }
    }
}
