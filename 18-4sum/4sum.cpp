class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int end=n-1;

            while(i+2<end){

                if(end<n-1 && nums[end]==nums[end+1]){
                   end--;
                   continue;
                }



                int left=i+1;
                int right=end-1;



                while(left<right){

                    long long sum=1LL*nums[i]+nums[left]+nums[right]+nums[end];

                    if(sum==target){
                        ans.push_back({nums[i],nums[left],nums[right],nums[end]});

                        while(left<right && nums[left]==nums[left+1]){
                            left++;
                        }
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }

                        left++;
                        right--;

                    }
                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }

                end--;
            }

        }


        return ans;
    }
};