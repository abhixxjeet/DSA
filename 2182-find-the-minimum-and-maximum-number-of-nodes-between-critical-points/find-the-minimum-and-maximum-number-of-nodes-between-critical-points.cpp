/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        vector<int>ans(2,-1);
        vector<int>points;

        int count=1;
        int prev1=temp->val;
        temp=temp->next;
        int prev2=temp->val;
        temp=temp->next;
        count=3;


        while(temp){
            
            int temp1=temp->val;

            if((prev2>prev1 && prev2>temp1) || (prev2<prev1 && prev2<temp1)){
                points.push_back(count);
            }
            
            prev1=prev2;
            prev2=temp1;



            temp=temp->next;
            count++;
        }

        for(int i=1;i<points.size();i++){
            if(ans[0]==-1 || ans[0]>points[i]-points[i-1]){
                ans[0]=points[i]-points[i-1];
            }

             if(ans[1]==-1 || ans[1]<points[i]-points[0]){
                ans[1]=points[i]-points[0];
            }


        }
        return ans;

    }
};