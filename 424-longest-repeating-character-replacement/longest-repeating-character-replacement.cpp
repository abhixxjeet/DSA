class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>temp(26);
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
        int maxFreq=0;

        while(j<n){
            temp[s[j]-'A']++;

            int maxFreq=max(maxFreq,temp[s[j]-'A']);
            int windowsize=j-i+1;

            int replacement=windowsize-maxFreq;

            while(replacement>k){
                temp[s[i]-'A']--;
                i++;

                windowsize=j-i+1;
                replacement=windowsize-maxFreq;
            }
            ans=max(ans,j-i+1);

            j++;


        }

        return ans;
    }
};