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
        ListNode*previous=head;
       
        ListNode*behind=NULL;
        while(previous!=NULL){
            ListNode*temp=previous->next;
            previous->next=behind;
            behind=previous;
            previous=temp;
  
        }
        return behind;
        
    }
};