class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAl=INT_MIN;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxAl=max(sum,maxAl);
        }
        return max(0,maxAl);
    }
};