class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums;
        int x=0;
        int y=0;
        while(x<m && y<n){
            if(nums1[x]<nums2[y]){
                nums.push_back(nums1[x]);
                x++;
            }
            else{
                nums.push_back(nums2[y]);
                y++;
            }
        }

        while(x<m){
            nums.push_back(nums1[x]);
            x++;
        }
        while(y<n){
            nums.push_back(nums2[y]);
            y++;
        }
        for(int i=0;i<n+m;i++){
            nums1[i]=nums[i];
        }
    }
};