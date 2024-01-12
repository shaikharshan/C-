using namespace std;
class Node
{
    public:
    Node* next;
    Node* bottom;
    int data;

};
Node* merge_ll(Node* left,Node* right)
    {
        //using recusion
        Node* result = NULL;
        if(left==NULL)
        {
            return right;
        }
        else if(right==NULL)
        {
            return left;
        }
        if(left->data <= right->data)
        {
            result = left;
            result->next = merge_ll(left->next,right);
        }
        else
        {
            result = right;
            result->next = merge_ll(left,right->next);
        }
        return result;
        
    }
    
    Node* find_middle(Node* head)
    {
        Node* s = head;
        Node* f = head->next;
        while(f!=NULL && f->next!=NULL)
        {
            s= s->next;
            f=f->next->next;
        
            
        }
        return s;
    }
    
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node* middle = find_middle(head);
        Node* left = head;
        Node* right = middle->next;
        middle->next = NULL;
        Node* l = mergeSort(left);
        Node* r = mergeSort(right);
        Node* ans= merge_ll(left ,right);
        return ans;
        
    }