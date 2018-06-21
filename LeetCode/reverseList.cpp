static const auto ______ = [](){ 
    std::cout.sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*curr,*tmp;
        prev = NULL;
        curr = head;
        
        while(curr!=NULL){
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        
        return prev;
    }
};
