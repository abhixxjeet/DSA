class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int count=0;
        if(s==goal){
            return true;
        }

        while(count<n){
            char temp=s[0];
            for(int i=0;i<n-1;i++){
                s[i]=s[i+1];
            }
            s[n-1]=temp;
            if(goal==s){
                return true;
            }
            count++;
        }
        return false;

    }
};