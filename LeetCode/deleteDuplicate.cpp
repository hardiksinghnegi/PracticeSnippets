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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *iterp,*delp;
        
        if((head==NULL)||(head->next==NULL)){
            return head;
        }
        
        iterp = head;
        delp = head;
        
        while(iterp->next!=NULL){
            if(iterp->val == iterp->next->val){
                delp = iterp->next;
                iterp->next = iterp->next->next;
                delp->next = NULL;
                delete(delp);
            }
            else{
                iterp = iterp->next;
            }
        }
        
        return head;
    }
};
