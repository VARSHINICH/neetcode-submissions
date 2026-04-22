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
public:
    void reorderList(ListNode* head) {
        ListNode* temp1 = head;
        int leng=0;
        while(temp1){
            leng++;
            temp1 = temp1->next;
        }
        ListNode* temp=head;
        for(int i=0;i<leng/2;i++){
            temp=temp->next;
        }
        ListNode* back = reverseList(temp->next);
        temp->next=nullptr;
        ListNode* first = head;
        ListNode* second = back;
        while (second != nullptr) {
            ListNode* tmp1 = first->next;
            ListNode* tmp2 = second->next;
            first->next = second;
            second->next = tmp1;
            first = tmp1;
            second = tmp2;
        }

    }
};
