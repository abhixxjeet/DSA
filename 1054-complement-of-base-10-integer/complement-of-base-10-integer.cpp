class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        bitset<32>s(n);
        int x=31;
        while(s[x]==0){
            x--;
        }
        for(int i=0;i<=x;i++){
           if(s[i]==1){
            s[i]=0;
           }
           else{
            s[i]=1;
           }
        }
        return s.to_ulong();
    }
};