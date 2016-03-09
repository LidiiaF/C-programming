#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(void)
{
    struct node *myList = NULL;

    printf("Check linked list, linked list initialized NULL: ");
    showList(myList);

    myList = addNodeInList(myList,4);
    addNodeInList(myList,4);
    addNodeInList(myList,10);
    addNodeInList(myList,3);
    addNodeInList(myList,10);

    printf("\nIn a linked list added 5 nodes:\n");
    showList(myList);

    myList = reverseList(myList);
    printf("\nReverse a linked list:\n");
    showList(myList);

    myList = deleteNode(myList,10);
    printf("\nDelete node from a linked list:\n");
    showList(myList);

    myList = clearList(myList);
    printf("\nAllocated memory is free!\n");
    showList(myList);

    return 0;
}
