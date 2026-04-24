class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0;
        int r=0;
        int m=0;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L'){
                l++;
            }
            if(moves[i]=='R'){
                r++;
            }
            if(moves[i]=='_'){
                m++;
            }
        }
        return abs(l-r)+m;
    }
};