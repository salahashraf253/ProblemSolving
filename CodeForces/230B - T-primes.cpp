#include <iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;
 
bool isprime(long long x){
    if(x==1){
        return false;
    }
    else if(x==2){
        return true;
    }
    else if(x%2==0){
        return false;
    }
    else {
        long long limit=(long long )sqrt(x);
        for(int i=3;i<=limit;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
}
int main() {
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
        long long num;
        cin>>num;
        if(num<4){
            cout<<"NO\n";
        }
        else {
            long long sq= (long long)sqrt(num);
            if(sq*sq==num&&isprime(sq))
            {
                cout<<"YES\n";
            }
            else {
                cout<<"NO\n";
            }
        }
    }
}
