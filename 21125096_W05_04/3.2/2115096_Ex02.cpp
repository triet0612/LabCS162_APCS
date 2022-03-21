#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) return head;
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    int pos = 1;
    while (pos < left){
        prev = prev->next;
        pos++;
    }
    auto p = prev->next;
    while(left < right){
        auto n = p->next;
        p->next = n->next;

        n->next = prev->next;
        prev->next = n;
        left++;
    }
    return dummy.next;
}
