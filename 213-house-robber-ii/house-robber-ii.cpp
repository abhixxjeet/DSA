class Solution {
public:

    int solve(vector<int>&nums,int start,int end){
        int temp1=0;
        int temp2=0;
        for(int i=start;i<=end;i++){
            int temp=max(temp2,temp1+nums[i]);
            temp1=temp2;
            temp2=temp;
        }
        return temp2;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<=2){
            if(n==1){
                return nums[0];

            }
            if(n==2){
                return max(nums[0],nums[1]);
            }
        }
        int x=solve(nums,0,n-2);
        int y=solve(nums,1,n-1);

        return max(x,y);
    }
};