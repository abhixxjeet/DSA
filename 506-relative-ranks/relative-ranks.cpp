class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq(score.begin(),score.end()) ;
        unordered_map<int,string>mp;
        int pos=1;
        int n=score.size();
        while(!pq.empty()){
            int val=pq.top();
            pq.pop();
            if(pos ==1){
                mp[val]="Gold Medal";
            }
            else if(pos==2){
                mp[val]="Silver Medal";
            }
            else if(pos==3){
                mp[val]="Bronze Medal";
            }
            else{
                mp[val]=to_string(pos);
            }
            pos++;
        }
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=mp[score[i]];
        }
        return ans;
    }
};