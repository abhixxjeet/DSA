class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;

        vector<int>temp(256,0);
        while(j<n){
           temp[s[j]]++;

           while(temp[s[j]]>1){
              temp[s[i]]--;
              i++;
           }

           ans=max(ans,j-i+1);
           j++;

        }
        
        return ans;
    }
};