class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>last(26,0);
        vector<bool>present(26,false);

        for(int i=0;i<s.length();i++){
            last[s[i]-'a']=i;
        }

        string st="";

        for(int i=0;i<s.length();i++){
            char c= s[i];

            if(present[s[i]-'a']){
                continue;
            }

            while(!st.empty() && st.back()>c && last[st.back()-'a']>i){

               present[st.back()-'a']=false;
               st.pop_back();
            }
            st.push_back(c);
            present[s[i]-'a']=true;
        }

        return st;
    }
};