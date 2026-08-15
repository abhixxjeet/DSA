class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;

        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
        }

        while(k--){
            int temp=pq.top();
            if(temp%2==1){
              temp=temp/2+1;
            }
            else{
                temp/=2;
            }
            pq.pop();
            pq.push(temp);
        }
        int ans=0;
        while(pq.size()){
            ans+=pq.top();
            pq.pop();
        }


        return ans;
    }
};