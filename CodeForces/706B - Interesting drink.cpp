#include <bits/stdc++.h>
using namespace std;

int arr[100009]={};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,q,m;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cin>>q;
    while (q--){
        cin>>m;
        cout<<upper_bound(arr,arr+n,m)-arr<<"\n";
    }
}
