class Solution {
public:
    int numberOfSubstrings(string s) {
        int last_a=-1,last_b=-1,last_c=-1;

        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                last_a=i;
            }
            else if(s[i]=='b'){
                last_b=i;
            }
            else{
                last_c=i;
            }


            int min_index=min(last_a,min(last_b,last_c));


            if(min_index!=-1){
                count+=(min_index+1);
            }
        }


        return count;
    }
};