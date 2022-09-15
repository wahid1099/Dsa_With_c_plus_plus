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
    ListNode* middleNode(ListNode* head) {
        int size = list_size(head);
        int mid = size/2;
        for(int i = 0; i <mid;i++){
            head = head->next;
        }

        return head;

        
    }
};