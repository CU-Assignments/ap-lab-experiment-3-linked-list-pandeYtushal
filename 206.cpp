class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *next = nullptr;
        
        while (current != nullptr) {
            next = current->next; // Save the next node
            current->next = prev; // Reverse the link
            prev = current; // Move pointers one position ahead
            current = next;
        }
        
        // 'prev' now points to the new head of the reversed list
        return prev;
    }
};



Input: [1,2,3,4,5]
  Output: [5,4,3,2,1]
