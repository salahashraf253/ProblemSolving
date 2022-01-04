class Solution {
public:
string flipString(string s){
    string sol="";
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1')sol.push_back('0');
        else sol.push_back('1');
    }
    return sol;
}
string convertToBinary(int n){
    string sol="";
    while (n){
        sol.push_back((char)((n%2)+'0'));
        n/=2;
    }
    return flipString(sol);
}

int bitwiseComplement(int n) {
    if(n==0)return 1;
    string sol= convertToBinary(n);
    int sum=0;
    for(int i=sol.size()-1;i>=0;i--){
        if(sol[i]-'0'){
            sum+= pow(2,sol.size()-i-1);
        }
    }
    return sum;
}
};
