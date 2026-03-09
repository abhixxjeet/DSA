class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp=nums;
        int n=nums.size();
        k=k%n;
        for(int i=0;i<nums.size();i++){
           nums[(i+k)%n]=temp[i];
        }
    }
};