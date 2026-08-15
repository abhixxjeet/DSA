class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);

        for(int i=0;i<s.length();i++){
            mp1[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]-'a']++;
        }

        int count=0;

        for(int i=0;i<26;i++){
            count+=abs(mp1[i]-mp2[i]);
        }

        return count/2;
    }
};