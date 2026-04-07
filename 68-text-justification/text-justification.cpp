class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
        int n=words.size();
        int i=0;

        while(i<n){

            int j=i;
            int lineLength=0;

            while(j<n && lineLength+words[j].length()+(j-i)<=maxWidth){
                lineLength+=words[j].length();
                j++;
            }

            int gap=j-i-1;
            string line="";

            if(j==n || gap==0){
                for(int k=i;k<j ; k++){

                    line +=words[k];
                    if(k<j -1){
                        line  +=" ";
                    }
                }
                line+=string(maxWidth-line.length(),' ');           
            }
            else{
                int totalSpaces=maxWidth-lineLength;
                int spaceEach=totalSpaces/gap;
                int extra=totalSpaces%gap;

                for(int k=i;k<j;k++){
                    line+=words[k];

                    if(k<j-1){
                        int spaces=spaceEach+(k-i<extra ?1:0);
                        line+=string(spaces,' ');
                    }
                }
            }
            result.push_back(line);
            i=j;
        }

        return result;
    }
};