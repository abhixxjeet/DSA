class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&candidates,vector<int>temp,int i,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i>=candidates.size() || target<0){
           return;
        }
        temp.push_back(candidates[i]);
        solve(candidates,temp,i,target-candidates[i]);
        temp.pop_back();
        solve(candidates,temp,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int>temp;
       int i=0;
       solve(candidates,temp,i,target);
       return ans;
    }
};