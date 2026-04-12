class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=INT_MIN;
        int temp=0;

        while(left<right){
           temp=(right-left)*min(height[left],height[right]);

           if(height[left]>height[right]){
            right--;
           }
           else{
            left++;
           }

           ans=max(temp,ans);
        }

        return ans;
    }
};