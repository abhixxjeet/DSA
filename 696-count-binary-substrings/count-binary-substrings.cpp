class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevCount=0;
        int currCount=1;
        int result=0;

        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                currCount++;
            }
            else{
                result+=min(prevCount,currCount);
                prevCount=currCount;
                currCount=1;
            }
    
        }
        return result+min(prevCount,currCount);
    }
};