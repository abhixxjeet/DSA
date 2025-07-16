class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            sign=(s[i]=='-')?-1:1;
            i++;

        }
        long result=0;
        while(i<n && isdigit(s[i])){
            int digit=s[i]-'0';
          if(result > (INT_MAX-digit)/10 ){
            return (sign==1) ? INT_MAX : INT_MIN;
          }
          result=result*10+(s[i]-'0');
          i++;
        }
        return static_cast<int>(sign*result);
    }
};