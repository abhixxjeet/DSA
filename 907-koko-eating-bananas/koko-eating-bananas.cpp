class Solution {
public:
    bool solve(vector<int>&piles,int h,int mid){
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid>0){
                count=count+piles[i]/mid+1;
            }
            else{
                count+=piles[i]/mid;
            }
            if(count>h){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int right=*max_element(piles.begin(),piles.end());
        int left=1;
        int mid;
        int ans;
        while(left<=right){
            mid=(left+right)/2;
            if(solve(piles,h,mid)){
                ans=mid;
                right=mid-1;
            }
            else{
             left=mid+1;
            }
        }
        return ans;
    }
};