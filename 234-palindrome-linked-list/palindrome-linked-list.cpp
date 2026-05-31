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
    bool isPalindrome(ListNode* head) {
        vector<int>val;
        ListNode* temp=head;

        while(temp){
            val.push_back(temp->val);
            temp=temp->next;
        }

        int right=val.size()-1;
        int left=0;
        while(left<right){
            if(val[left]!=val[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};