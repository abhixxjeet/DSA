class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(stones.begin(),stones.end());

        while(pq.size()>1){
          int temp1=pq.top();
          pq.pop();
          int temp2=pq.top();
          pq.pop();
          if(abs(temp1-temp2)>0){
            pq.push(abs(temp1-temp2));
          }
        }
        return pq.empty() ? 0:pq.top();
    }
};