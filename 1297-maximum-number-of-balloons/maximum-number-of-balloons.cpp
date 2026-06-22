class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count=0;

        unordered_map<char,int>mp;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b' || text[i]=='a' || text[i]=='l' || text[i]=='o' || text[i]=='n'){
                mp[text[i]]++;
            }
        }

        if(mp['b'] || mp['a'] || mp['l'] || mp['o'] || mp['n']){
            mp['l']=mp['l']/2;
            mp['o']=mp['o']/2;

            count=min(min(mp['b'],mp['a']),min(mp['l'],min(mp['o'],mp['n'])));
        }

        return count;
    }
};