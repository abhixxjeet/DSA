class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        string s=s2;
        char temp2=s2[2];
        char temp3=s2[3];

        if(s1==s2){
            return true;
        }
            s[2]=s[0];
            s[0]=temp2;
            if(s1==s){
                return true;
            }

            s=s2;
            s[3]=s[1];
            s[1]=temp3;

            if(s1==s){
                return true;
            }

            s=s2;
            s[2]=s[0];
            s[0]=temp2;
            s[3]=s[1];
            s[1]=temp3;

            if(s1==s){
                return true;
            }

            return false;
    }
};