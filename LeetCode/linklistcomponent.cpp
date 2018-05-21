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
    int numComponents(ListNode* head, vector<int>& G) {
       
        ListNode* temp = head; 
        map <int,int> vecMap;
        
        for(int i=0;i<G.size();i++){
            vecMap.insert(pair <int, int> (G[i],0));
        }
        
        int comp = 0;
        
        while(temp!=NULL){
            if((vecMap.find(temp->val)!=vecMap.end()) && (temp->next==NULL || vecMap.find(temp->next->val)==vecMap.end())){
                comp++;
            }
            
            temp = temp->next;
        }
        
        return comp;
    }
};
