class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            string str=to_string(i);
            int len=str.length();
            int flag=0;
            int change=0;


            for(int j=0;j<len;j++){
                if(str[j]=='2'){
                    change =1;
                }
                else if(str[j]=='5'){
                    change=1;
                }
                else if(str[j]=='6'){
                    change=1;
                }
                else if(str[j]=='9'){
                    change=1;
                }
                else if(str[j]=='3' || str[j]=='4' || str[j]=='7'){
                    flag=1;
                    break;
                }
                
            }
            if(flag==0 && change==1){
                count++;
            }
        }
        return count;
    }
};