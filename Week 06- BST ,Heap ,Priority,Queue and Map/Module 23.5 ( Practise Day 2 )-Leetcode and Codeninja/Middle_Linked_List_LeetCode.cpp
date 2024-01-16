// prothom Neyom

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }

        int middle = cnt / 2;
        tmp = head;
        for (int i = 0; i < middle; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

//Bikolpo neyom 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
 