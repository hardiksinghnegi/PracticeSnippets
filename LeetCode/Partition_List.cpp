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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *smallHead = new ListNode(0);
        ListNode *largeHead = new ListNode(0);
        ListNode *smallPtr = smallHead, *largePtr = largeHead; 
        
        while(head!=NULL){
            if(head->val<x){
                smallPtr->next = head;
                smallPtr = smallPtr->next;
            }
            else{
                largePtr->next = head;
                largePtr = largePtr->next;
            }
            
            head = head->next;
        }
        
        largePtr->next = NULL;
        smallPtr->next = largeHead->next;
        
        return smallHead->next;
    }
};
