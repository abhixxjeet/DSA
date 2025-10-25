class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        int count=0;
        int prevend=INT_MIN;
        for(int i=0;i<intervals.size();i++){
            if(prevend<=intervals[i][0]){
                prevend=intervals[i][1];
            }
            else{
                count++;
            }
        }
        return count;    
    }
};