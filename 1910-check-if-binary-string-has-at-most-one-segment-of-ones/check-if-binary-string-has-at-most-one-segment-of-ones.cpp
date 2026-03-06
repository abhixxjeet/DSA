class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0;
        int flag=1;
        for(int i=1;i<s.length();i++){
            if(s[i]=='0' && flag==1){
                count++;
                flag=0;
            }
            if(s[i]=='1' && flag==0){
                count++;
                flag=1;
            }
        }
        return count<=1;
    }
};