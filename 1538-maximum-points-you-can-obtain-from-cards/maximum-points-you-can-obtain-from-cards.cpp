class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int leftsum=0;
        int rightsum=0;
        int maxsum=0;

        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i];
        } 
        maxsum=leftsum;
        for(int i=0;i<k;i++){
            leftsum-=cardPoints[k-i-1];
            rightsum+=cardPoints[n-1-i];
            maxsum=max(maxsum,leftsum+rightsum);
        }
        return maxsum;
    }
};