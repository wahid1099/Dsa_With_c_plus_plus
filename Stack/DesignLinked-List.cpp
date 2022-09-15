class MyLinkedList {
public:
       int val ;
        MyLinkedList*next ;
        MyLinkedList *head;
    MyLinkedList() {
        head=NULL;
    }
    MyLinkedList(int val){
        this->val=val;
        this->next=NULL;
    }
    
    int get(int index) {
        MyLinkedList *temp=head;
        for(int i=1;i<=index;i++){
            temp=temp->next;
            if(temp==NULL) break;
        }
        if(temp==NULL) return -1;
        else return temp->val;
        
    }
    
    void addAtHead(int val) {
        MyLinkedList *newnode=new MyLinkedList(val);
        newnode->next=head;
        head=newnode;

        
    }
    
    void addAtTail(int val) {
         MyLinkedList *newnode=new MyLinkedList(val);
         if(head==NULL){
            head=newnode;
            return;
         }
        MyLinkedList *temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
       
        temp->next=newnode;
        newnode->next=NULL;
        
    }
    
    void addAtIndex(int index, int val) {
        if(index ==0){
            addAtHead(val);
            return;
        }

        MyLinkedList *temp=head;
        for(int i=1; i<=index-1; i++){
            temp=temp->next;
            if(temp==NULL){
                break;
            }

        }
        if(temp==NULL){
            return;
        }
        MyLinkedList *newnode=new MyLinkedList(val);
        newnode->next=temp->next;
        temp->next=newnode;

    }
    
    void deleteAtIndex(int index) {
        if(index==0){
            MyLinkedList*del=head;
            head=head->next;
            delete del;
            return;
        }

        MyLinkedList *temp=head;
        for(int i=0; i<index-1; i++){
            temp=temp->next;
            if(temp==NULL) break;

        }
        if(temp==NULL) return;

    MyLinkedList *delnode=temp->next;
    if(delnode==NULL) return;
        temp->next=temp->next->next;
        delete delnode;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */