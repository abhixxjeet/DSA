class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char a='{';
        for(int i=0;i<letters.size();i++){
            if(letters[i]<a && letters[i]>target){
                a=letters[i];
            }
        }
        return (a=='{') ?letters[0]:a;
    }
};