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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        
        ListNode *holder = new ListNode(0);
        holder->next = head;
        
        ListNode *temp,*prev;
        temp = head;
        prev = holder;
        
        while(temp!=NULL){
            if(temp->val==val){
                prev->next = temp->next;
            }
            else{
                prev = temp;    
            }
            
            temp = temp->next;
        }
        return holder->next;
    }
};
