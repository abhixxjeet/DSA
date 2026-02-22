class Solution {
public:
    int binaryGap(int n) {
        bitset<32>s(n);
        int ans=0;
        int last=-1;
        for(int i=0;i<32;i++){
           if(s[i]==1){
            if(last!=-1){
                ans=max(ans,i-last);
            }
            last=i;
           }
        }
        return ans;
    }
};