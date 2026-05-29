/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;

        int count1=0;
        int count2=0;

        while(temp1){
            temp1=temp1->next;
            count1++;
        }

        while(temp2){
            temp2=temp2->next;
            count2++;
        }
        int count=abs(count1-count2);
        temp1=headA;
        temp2=headB;
        if(count1>count2){
           while(count-- && temp1){
            temp1=temp1->next;
           }
        }
        else{
            while(count-- && temp2){
                temp2=temp2->next;
            }
        }

        while(temp1 && temp2){
            if(temp1 == temp2){
                return temp1;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
    
        return nullptr;
    }
};