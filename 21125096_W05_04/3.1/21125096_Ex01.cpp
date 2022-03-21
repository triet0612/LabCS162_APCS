#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};

bool hasCycle(ListNode *head){
    if (head == NULL || head->next == NULL){
        return false;
    }
    ListNode* cur1 = head;
    ListNode* cur2 = head;
    while (cur2 != NULL && cur2->next != NULL){
        cur1 = cur1->next;
        cur2 = cur2->next->next;
        if (cur1 == cur2){
            return true;
        }
    }
    return false;
}