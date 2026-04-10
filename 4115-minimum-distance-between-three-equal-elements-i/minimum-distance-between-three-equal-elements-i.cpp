class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }

        int ans=INT_MAX;

        for(auto &p:mp){
            vector<int>& v=p.second;

            if(v.size()>=3){
                for(int i=0;i<v.size();i++){
                    for(int j=i+1;j<v.size();j++){
                        for(int k=j+1;k<v.size();k++){
                            int dist=2*(v[k]-v[i]);
                            ans=min(ans,dist);
                        }
                    }
                }
            }
        }

        return ans==INT_MAX ? -1:ans;
    }
};