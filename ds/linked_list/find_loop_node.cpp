int findFirstNode(Node* head)
    {
        // your code here
        Node* s = head;
        Node* f= head;
        bool isloop = false;
        while(f && f->next)
        {
            s=s->next;
            f=f->next;
            f=f->next;
            if(s==f)
            {
                isloop =true;
                break;
            }
        }
        if(isloop==false)
        {
            return -1;
        }
        else{
            s=head;
            Node* prev = NULL;
            while(s!=f)
            {
                prev = s;
                s=s->next;
                f=f->next;
                
            }
            return s->data;
        }
    }