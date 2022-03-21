#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

int main(){
    ListNode* lst;
    return 0;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    for (ListNode* cur_a = headA; cur_a != NULL; cur_a = cur_a->next){
        for (ListNode* cur_b = headB; cur_b != NULL; cur_b = cur_b->next){
            if (cur_a == cur_b){
                return cur_a;
            }
        }
    }
    return NULL;
}
