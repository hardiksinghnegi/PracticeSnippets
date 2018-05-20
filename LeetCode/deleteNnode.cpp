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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL){
            head = NULL;
            return head;
        }
        
        ListNode *prev,*temp,*rem;
        prev = head;
        temp = head;
        rem = head;
        
        while(n>0){
            temp = temp->next;
            n--;
        }
        
        while(temp!=NULL){
            temp = temp->next;
            prev = rem;
            rem = rem->next;
        }
        if(rem == head){
            return head->next;
        }
        prev->next = rem->next;
        rem->next = NULL;
        delete rem;
        
        return head;
    }
};
