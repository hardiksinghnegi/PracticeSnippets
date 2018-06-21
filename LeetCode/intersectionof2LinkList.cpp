/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


static const auto ______ = [](){ 
    std::cout.sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
        return nullptr;
    }
    int ALen = 0;
    int BLen = 0;
        
    ListNode *tempA,*tempB;
    tempA = headA;
    tempB = headB;
        
    while(tempA!=NULL){
        tempA = tempA->next;
        ++ALen;
    }
    while(tempB!=NULL){
        tempB = tempB->next;
        ++BLen;
    }
        
    if (ALen < BLen) {
        std::swap(ALen, BLen);
        std::swap(headA, headB);
    }
    for (int i = 0; i < ALen - BLen; ++i) {
        headA = headA->next;
    }
    for (int i = 0; i < BLen; ++i) {
        if (headA == headB) {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return nullptr;
    }
};
