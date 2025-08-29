class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int j=0;
        int i=0;
        int count=0;
        int result=0;
        while(i<n){
            mp[s[i]]++;
            while(mp['a'] >=1 && mp['b']>=1 && mp['c']>=1){
                
                result+=n-i;
                mp[s[j]]--;
                j++;
            }
            i++;
        }
        return result;
    }
};