class Solution {
public:

    bool allzeros(vector<int>temp){
        for(int i=0;i<temp.size();i++){
            if(temp[i]>0){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();

        vector<int>temp(128,0);

        for(int i=0;i<n;i++){
            temp[t[i]]++;
        }

        int i=0;
        int j=0;

        int count=INT_MAX;
        int start=0;
        int minLen=0;

        while(j<m){
            temp[s[j]]--;
            

            while(allzeros(temp)){
                int temp1=j-i+1;
                if(temp1<count){
                    start=i;
                    minLen=j-i+1;
                    count=temp1;
                }
                temp[s[i]]++;
                i++;
            }

            j++;
        }
        
        if(count==INT_MAX){
            return "";
        }

        return s.substr(start,minLen);
    }
};