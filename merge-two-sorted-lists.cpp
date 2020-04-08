/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode *current1 = l1, *current2 = l2, *output, *output_first;
        if (current1->val < current2->val){
            output = current1;
            current1 = current1->next;
        }
        else{
            output = current2;
            current2 = current2->next;
        }
        output_first = output;
        while(current1 != NULL && current2 != NULL){
            if (current1->val < current2->val){
                output->next = current1;
                output = output->next;
                current1 = current1->next;
            }
            else{
                output->next = current2;
                output = output->next;
                current2 = current2->next;
            }
        }
        if (current1 == NULL)
            output->next = current2;
        else 
            output->next = current1;
        return output_first;
    }
};