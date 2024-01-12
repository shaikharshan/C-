  #include<iostream>
using namespace std;
  
  ListNode* revll(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* fwd = NULL;
        while(curr)
        {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
     
        }
        return prev;
        
    }
    ListNode* doubleIt(ListNode* head) {
           head = revll(head);
            ListNode* temp  = head;
            int carry = 0;
            while(temp)
            {
                int num = 2* temp->val;
                temp->val= (carry+num) %10;
                carry = (carry+num)/10;
                if(temp->next == NULL && carry)
                {
                    temp->next = new ListNode(carry);
                    temp = temp->next;
                }
                temp = temp->next;

            }
            return revll(head);
        
    }