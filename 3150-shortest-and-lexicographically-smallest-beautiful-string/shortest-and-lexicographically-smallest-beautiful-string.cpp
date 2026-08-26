class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.length();
        string ans="";
        
        int length=INT_MAX;
        int i=0;
        int j=0;
        int count=0;
        while(j<n){
          if(s[j]=='1'){
            count++;
          }

          if(count>k){
            while(count>k){
               if(s[i]=='1'){
                count--;
               }
               i++;
            }
          }


          while(count==k && s[i]=='0'){
            i++;
          }

          if(count==k ){
             
            int currlen=j-i+1;

            if(length>currlen || (length==currlen && s.substr(i,currlen)<ans)){

            ans=s.substr(i,currlen);
            length=j-i+1;
            }
          }

          j++;


        }

        return ans;
    }
};