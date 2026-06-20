class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32>bit1(start);
        bitset<32>bit2(goal);

        int count=0;

        for(int i=0;i<31;i++){
           if(bit1[i] != bit2[i] ){
            count++;
           }
        }

        return count;
    }
};