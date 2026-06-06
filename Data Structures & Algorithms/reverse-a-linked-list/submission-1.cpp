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
    ListNode* reverseList(ListNode* head) {
        stack<int> st;
        if(head==nullptr){
            return head;
        }
        ListNode* temp = head;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        int k = st.top();
        st.pop();
        ListNode* dummy = new ListNode(k);
        ListNode* temp1 = dummy;
        while(!st.empty()){
            ListNode* node = new ListNode(st.top());
            st.pop();
            temp1->next = node;
            temp1 = temp1->next;
        }
        return dummy;
    }
};
