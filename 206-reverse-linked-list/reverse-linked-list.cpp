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
    ListNode* reverseList(ListNode* head) {
        ListNode *ans=head;
        vector<int>temp;
        
        while(ans){
            temp.push_back(ans->val);
            ans=ans->next;
        }

        ans=head;

        int n=temp.size();

        for(int i=n-1;i>=0;i--){
            ans->val=temp[i];
            ans=ans->next;
        }

        return head;
    }
};