#include <bits/stdc++.h>
#define el "\n"
#define loop(n) for(int i=0 ;i<n;i++)
#define loop2(first,last)for(int i=first;i<=last;i++)
#define nested_loop(n,m)for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define all(vec) vec.begin(), vec.end()
#define start ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef double dd;
using namespace std;
const double pi= acos(-1);
bool onSameLine(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    return (b.first - a.first)*(c.second - a.second) == (c.first- a.first)
    *(b.second - a.second);
}
ll CalcDistance(double x1,double x2,double y1,double y2){
    return sqrt(dd((x1-x2)*(x1-x2)) + dd((y1-y2)*(y1-y2)));
}
void yes(){
    cout<<"YES\n";
}
void no(){
    cout<<"NO\n";
}
bool isprime(ll n){
    if(n==0||n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(ll i=2;i*i<=n;i++) {
        if (n % i == 0)return false;
    }
    return true;
}
ll FAST_POWER(ll a,ll b){
    if(b==0)return 1;
    ll res=1;
    if(b==1)return a;
    else {
        res = FAST_POWER(a*a,b/2);
    }
    if(b%2==1)return a*res;
    else return res;
}
ll fast_pow(ll b, ll e, ll mod){
    ll power = 1;
    while(e){
        if(e & 1) power = ((power % mod) * (b % mod)) % mod;
        e >>= 1;
        b = ((b % mod) * (b % mod)) % mod;
    }
    return power % mod;
}
set<ll>getdivisors(ll val){
    set<ll>st;
    for(int i=1; i<=sqrt(val); i++){
        if(val%i==0){
            st.insert(i), st.insert(val/i);
        }
    }
    return st;
}
void insertionSort(int arr[], int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j]=key;
    }
}
int  primeFactors(int n){
   int ctr=0;
    while (n%2==0){
        n/=2;
        ctr++;
    }
    for(int i=3;i<= sqrt(n);i+=2){
        while (n%i==0){
            n/=i;
            ctr++;
        }
    }
    if(n>2)ctr++;
    return ctr;
}

int main() {
   start;
    int t;
    cin>>t;
    string s;
    while (t--){
        bool even=0;
        cin>>s;
        if((s[s.size()-1]-'0')%2==0){
            cout<<0<<el;
            continue;
        }
        loop(s.size()){
            if((s[i]-'0')%2==0){
                even=1;
                if(i==0)cout<<1<<el;
                else cout<<2<<el;
                break;
            }
        }
        if(!even)cout<<-1<<el;
    }
}
