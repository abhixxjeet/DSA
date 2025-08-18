class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>lg(n);
        vector<int>rg(n);
        lg[0]=height[0];
        for(int i=1;i<n;i++){
          lg[i]=max(lg[i-1],height[i]);
        }
        rg[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rg[i]=max(rg[i+1],height[i]);
        }
        int result=0;
        for(int i=1;i<n-1;i++){
           result+=min(lg[i],rg[i])-height[i];
        }
        return result;
    }
};