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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sol = new ListNode(0);
        ListNode* tmp = sol;
        int val1,val2,sum = 0,digitCarry=0,digitSum=0;
        
        while((l1!=NULL) && (l2!=NULL)){
            val1 = l1->val;
            val2 = l2->val;
            sum = val1+val2+digitCarry;
            digitSum = sum%10;
            digitCarry = sum/10;
            ListNode* digitNode = new ListNode(digitSum);
            tmp->next = digitNode;
            tmp = tmp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        ListNode* remNode;
        if((l1==NULL)&&(l2!=NULL)){
            remNode = l2;
        }
        
        if((l1!=NULL)&&(l2==NULL)){
            remNode = l1;
        }
        
        if((l1!=NULL)||(l2!=NULL)){
            while(remNode!=NULL){
                val1 = remNode->val;
                sum = val1+digitCarry;
                digitSum = sum%10;
                digitCarry = sum/10;
                ListNode* digitNode = new ListNode(digitSum);
                tmp->next = digitNode;
                tmp=tmp->next;
                remNode = remNode->next;    
            }   
        }
       
        if(digitCarry!=0){
                ListNode* digitNode = new ListNode(digitCarry);
                tmp->next = digitNode;
            }
        
        
        return sol->next;
    }
};
