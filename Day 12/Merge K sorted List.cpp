class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        if(l1->val <= l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }else{
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = nullptr;
        
        for(int i = 0; i < lists.size(); ++i){
            head = mergeTwoLists(head, lists[i]);
        }
        
        return head;
    }
};
