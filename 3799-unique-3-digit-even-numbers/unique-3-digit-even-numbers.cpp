class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0);

        for(int i=0;i<digits.size();i++){
            freq[digits[i]]++;
        }

        int ans=0;

        for(int a=1;a<=9;a++){
            if(freq[a]==0){
                continue;
            }

            for(int b=0;b<=9;b++){
                if(freq[b]==0){
                    continue;
                }


                for(int c=0;c<=8;c+=2){
                    if(freq[c]==0){
                        continue;
                    }
                    if(a==b && b==c){
                       if(freq[a]<3){
                        continue;
                       }
                    }
                    else if(a==b){
                        if(freq[a]<2){
                            continue;
                        }
                    }
                    else if(a==c){
                        if(freq[a]<2){
                            continue;
                        }
                    }
                    else if(b==c){
                        if(freq[b]<2){
                            continue;
                        }
                    }

                    ans++;
                }
            }
        }

        return ans;
    }
};