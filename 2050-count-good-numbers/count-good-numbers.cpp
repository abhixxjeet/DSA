class Solution {
public:
    const int Mod=1e9+7;
    int power(long long a,long long b){
       
            if(b==0){
                return 1;
            }
            long long half=power(a,b/2);
            long long result=(half*half) % Mod;
            if(b%2==1){
              result=(result * a) % Mod;
            }
        return result;
    }
    int countGoodNumbers(long long n) {
        return (long long)power(4,n/2)*power(5,(n+1)/2) % Mod;
    }
};