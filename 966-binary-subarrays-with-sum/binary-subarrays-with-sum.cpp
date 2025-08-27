class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int result=0;
        int currsum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int &num:nums){
            currsum+=num;
            int remainSum=currsum-goal;
            if(mp.find(remainSum)!=mp.end()){
                result+=mp[remainSum];
            }
            mp[currsum]++;
        }
        return result;
    }
};