class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int gcd=1;
        int odd=0;
        int even=0;
        for(int i=1;i<=2*n;i++){
           if(i%2==0){
            even+=i;
           }
           else{
            odd+=i;
           }
        }

        for(int i=2;i<odd;i++){
            if(odd%i ==0 && even%i==0){
                gcd=i;
            }
        }

        return gcd;
    }
};