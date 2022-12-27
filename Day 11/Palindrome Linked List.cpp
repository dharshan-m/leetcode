class Solution{
  public:
      bool is palindrome(ListNode*head){
        stack<int>;
        ListNode*th=head;
        while(th!=NULL){
          s.push(th->val)
            th=th->next;
        }
        th=head;
        while(th!=NULL){
          if(s.top(!=th->val){
            return fales;
          }
          s.pop();
          th=th->next;
        }
        return 0;
     }
}
