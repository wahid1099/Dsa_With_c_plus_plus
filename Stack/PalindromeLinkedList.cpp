
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
    stack<int>st;
    queue<int>qt;
    bool isPalindrome(ListNode* head) {
        while(head!=NULL) {
            st.push(head->val);
            qt.push(head->val);
            head=head->next;
        }
        while(!st.empty()) {
            int x=st.top();
            int y=qt.front();
            st.pop();
            qt.pop();
            if(x!=y){
                return false;
            }
        }
        return true;
        
    }
};