class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minP=INT_MAX;
        int maxP=INT_MIN;
        for(int i=0;i<n;i++){
            if(prices[i]<minP){
                minP=prices[i];
            }

            maxP=max(maxP,prices[i]-minP);
        }
        return maxP;
    }
};