class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>ls(n);
        vector<int>rs(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>= heights[i]){
                st.pop();
            }
            rs[i]=st.empty() ? n : st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]> heights[i]){
                st.pop();
            }
            ls[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }
        int max=0;
        for(int i=0;i<n;i++){
            int width=rs[i]-ls[i]-1;
            int temp=heights[i]*width;
            if(temp>max){
                max=temp;
            }
        }
        return max;
        
    }
};