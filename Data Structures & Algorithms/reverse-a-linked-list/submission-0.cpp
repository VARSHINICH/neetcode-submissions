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
            return nullptr;
        }
        while(head){
            st.push(head->val);
            head=head->next;
        }
        int d = st.top();
        ListNode* temp = new ListNode(d);
        ListNode* temp1=temp;
        st.pop();
        while(!st.empty()){
            ListNode* h = new ListNode(st.top());
            temp1->next=h;
            temp1=temp1->next;
            st.pop();
        }
        return temp;
    }
};
