class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;

        for(int i=0;i<s.length();i++){
            vector<int>arr(256,0);
            int temp=0;
            for(int j=i;j<s.length();j++){
                int k=s[j];
                arr[k]++;
                if(arr[k]>1){
                    break;
                }
                else{
                    temp++;
                }
            }

            count=max(count,temp);
        }

        return count;
    }
};