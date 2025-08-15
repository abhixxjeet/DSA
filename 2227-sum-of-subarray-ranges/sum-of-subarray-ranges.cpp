class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int>prevg(n);
        vector<int>nextg(n);
        vector<int>prevs(n);
        vector<int>nexts(n);

        stack<int>st;
        
        for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]<=nums[i]){
            st.pop();
        }
        prevg[i]= st.empty() ? -1 : st.top();
        st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }
            nextg[i]=st.empty() ? n : st.top();
            st.push(i);
        }

        while(!st.empty()){
            st.pop();
        }

        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            prevs[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }
        
        while(!st.empty()){
            st.pop();
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            nexts[i]=st.empty() ? n : st.top();
            st.push(i);
        }

        long long result=0;
        for(int i=0;i<n;i++){
            long long maxCont=(long long)(i - prevg[i])*(nextg[i]-i)*nums[i];
            long long minCont=(long long)(i - prevs[i])*(nexts[i]-i)*nums[i];

            result+=maxCont-minCont;
        }
        return result;
    }
};