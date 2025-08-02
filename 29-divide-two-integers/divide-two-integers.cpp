class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=0;
        if(dividend==INT_MIN &&  divisor==-1){
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1){
            return INT_MIN;
        }
        long long divid=abs((long long)dividend);
        long long divis=abs((long long)divisor);
        while(divid>=divis){
            long long temp=divis;
            long long multiple=1;
            while(divid>=(temp<<1)){
              temp=temp<<1;
              multiple=multiple<<1;
            }
            count+=multiple;
            divid-=temp;
        }
        if(dividend<0 ^ divisor<0){
            return -count;
        }
        return count;
    }
};