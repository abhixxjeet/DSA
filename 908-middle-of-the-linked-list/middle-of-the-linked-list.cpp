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
    ListNode* middleNode(ListNode* head) {
        ListNode* ans=head;
        int count=0;

        while(ans){
           ans=ans->next;
           count++;
        }

        ans=head;

        int middle=count/2;

        while(middle--){
            ans=ans->next;
        }

        return ans;
    }
};