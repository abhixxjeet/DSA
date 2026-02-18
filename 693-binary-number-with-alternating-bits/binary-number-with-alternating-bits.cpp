class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>a(n);
        int x=31;
        while(x>0 && a[x]==0){
            x--;
        }
        for(int i=1;i<=x;i++){
            if(a[i]==a[i-1]){
                return false;
            }
        }
        return true;
    }
};