class Solution {
    
    public int countPrimes(int n) {
        boolean []prime=new boolean[n+5];
        for(int i=1;i<=n;i++){
            prime[i]=true;
        }
        prime[0]=prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        int sol=0;
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                sol++;
            }
        }
        return sol;
    }
}
