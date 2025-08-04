class Solution {
public:
    int countPrimes(int n) {
        vector<bool>isprime(n,true);
        if(n<=2){
            return 0;
        }
        isprime[0]=isprime[1]=false;
        for(int i=2;i*i<n;i++){
            if(isprime[i]){
                for(int j=i*i;j<n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        return count(isprime.begin(),isprime.end(),true);
    }
};