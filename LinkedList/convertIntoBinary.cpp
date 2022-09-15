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
     int list_size(ListNode *node) {
    int count = 0;
    while(node != NULL){
        node = node->next;
        count++;
    }
    return count;
       
}
    int getDecimalValue(ListNode* head) {
        int ans=0;
        int size=list_size(head);
        int power=pow(2,size-1);

        while(head!=NULL){
            if(head->val==1){
              ans+=power;
            }

            head=head->next;
            power/=2;
           
        }

        return ans;
        
    }
};