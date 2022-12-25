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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *start = new ListNode();
        start -> next = head;
        ListNode* fastPtr = start;
ListNode* slowPtr = start;
        // Traverse the LinkedList B times
        for(int i = 0; i < n; i++){
          fastPtr = fastPtr->next;
        }
       //Increase the slow pointer
        while(fastPtr->next != NULL)
        {
            fastPtr = fastPtr->next;
            slowPtr = slowPtr->next;
        }
        //Deletion step
        slowPtr->next = slowPtr->next->next;
       //Return head
        return start->next;
        
    }
};