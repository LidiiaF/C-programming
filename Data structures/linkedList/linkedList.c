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

    printf("\nIn a linked list added %d nodes:\n", countNodesInList(myList));
    showList(myList);

    myList = removeNodeInList(myList, 2);
    printf("\nNow in the linked list %d nodes:\n", countNodesInList(myList));
    showList(myList);

    myList = reverseList(myList);
    printf("\nReverse a linked list:\n");
    showList(myList);

    myList = removeNodeByVal(myList,10);
    printf("\nNow in the linked list %d nodes:\n", countNodesInList(myList));
    showList(myList);

    myList = clearList(myList);
    printf("\nAllocated memory is free!\n");
    showList(myList);

    return 0;
}
