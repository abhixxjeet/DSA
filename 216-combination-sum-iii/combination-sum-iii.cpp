class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>temp,int k,int n,int start){
        if(n==0 && temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(temp.size()>k){
            return;
        }
        if(start>10){
            return;
        }
        for(int i=start;i<10;i++){
            if(n<0){
                return;
            }
            temp.push_back(i);
            solve(temp,k,n-i,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        solve(temp,k,n,1);
        return ans;
    }
};