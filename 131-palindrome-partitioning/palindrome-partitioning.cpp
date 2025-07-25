class Solution {
public:
    vector<vector<string>>ans;
    bool ispallindrome(string&s,int end,int start){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    void solve(vector<string>&temp,string&s,int index,int n){
        if(index>=n){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<n;i++){
            if(ispallindrome(s,i,index)){
            temp.push_back(s.substr(index,i-index+1));
            solve(temp,s,i+1,n);
            temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        int n=s.length();
        solve(temp,s,0,n);
        return ans;
    }
};