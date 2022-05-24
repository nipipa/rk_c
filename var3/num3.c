#include <stdio.h>

struct LNode;

void reversed(LNode listNode){
    if(listnode == NULL || listnode->next == NULL)
        return listnode;
    reverseList(listnode->next);
    //save the current value
    int val = listnode->val;
    LNode *temp = listnode;
    // shift all the values to the left
    while(temp->next != NULL)
    {
        temp->val = temp->next->val;
        temp = temp->next;
    }
    // assign the save value at the end of the list
    temp->val = val;
    return;
}