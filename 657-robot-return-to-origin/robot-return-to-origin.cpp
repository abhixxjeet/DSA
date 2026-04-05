class Solution {
public:
    bool judgeCircle(string moves) {
        int lateral=0;
        int vertical=0;

        for(int i=0;i<moves.length();i++){
           if(moves[i]=='U'){
            vertical++;
           }
           if(moves[i]=='D'){
            vertical--;
           }
           if(moves[i]=='L'){
            lateral--;
           }
           if(moves[i]=='R'){
            lateral++;
           }
           
        }
        if(lateral==0 && vertical==0){
            return true;
        }
        return false;
    }
};