class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&candidates,vector<int>temp,int i,int target){
       if(target==0){
        ans.push_back(temp);
       }
       for(int j=i;j<candidates.size();++j){
        if(j>i && candidates[j]==candidates[j-1]){
            continue;
        }
        if(candidates[j]>target){
            break;
        }
        temp.push_back(candidates[j]);
        solve(candidates,temp,j+1,target-candidates[j]);
        temp.pop_back();
       }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        int i=0;
        solve(candidates,temp,i,target);
        return ans;
    }
};