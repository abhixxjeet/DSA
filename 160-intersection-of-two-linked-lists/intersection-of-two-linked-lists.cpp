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
        ListNode* temp=headA;
        ListNode* temp2=headB;
        int count1=0;
        while(temp){
          temp=temp->next;
          count1++;
        }
        int count2=0;
        while(temp2){
          temp2=temp2->next;
          count2++;
        }
        temp=headA;
        temp2=headB;
        int count=0;
        if(count1>count2){
          count=abs(count1-count2);
          while(count-- && temp){
            temp=temp->next;
          }
        }
        else{
            count=abs(count1-count2);
          while(count-- && temp2){
            temp2=temp2->next;
          }
        }
        while(temp && temp2){
            if(temp==temp2){
                return temp;
            }
            else{
                temp=temp->next;
                temp2=temp2->next;
            }
        }
        return nullptr;
    }
};