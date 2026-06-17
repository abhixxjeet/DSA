class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=1;
        if(n<=0){
            return false;
        }
        if(i==n){
            return true;
        }
        for(int j=0;j<31;j++){
            i<<=1;
            if(i==n){
                return true;
            }
        }

        return false;
    }
};