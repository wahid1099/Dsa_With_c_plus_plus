/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

ListNode *head=NULL;
void insetATtail(int  val){
    ListNode *newnode=new ListNode(val);
    if(head==NULL){
        head=newnode;
        return;
        
    }
    ListNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *a=list1;
        ListNode *b=list2;
        while(a!=NULL && b!=NULL){
            if(a->val <=b->val){
                insetATtail(a->val);
                a=a->next;
            }else{
                 insetATtail(b->val);
                 b=b->next;
            }
        }
        while(a!=NULL){
           
             insetATtail(a->val);
             a=a->next;
        }
         while(b!=NULL){
           
             insetATtail(b->val);
             b=b->next;
        }
      return head;
        
    }
};