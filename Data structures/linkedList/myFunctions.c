#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"

/*Print a linked list*/
void showList(struct node *ptr)
{
    if(ptr == NULL)
        printf("List is empty.\n");
    else
        while(ptr != NULL)
    {
        printf("Address %p: value = %d, next = %p\n",ptr, ptr->val,ptr->next);
        ptr = ptr->next;
    }

}

/*Initialize a linked list*/
struct node * addNodeInList(struct node *ptr, int n)
{
    struct node *current;
    if(ptr == NULL)
        ptr = initNode(n);

    else
    {
        current = ptr;
        while(current->next != NULL)
            current = current->next;
        current->next = initNode(n);
    }

    return ptr;
}

/*Initialize a node*/
struct node * initNode(int n)
{
  struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    current->next = NULL;
    current->val = n;
    return current;
}

/*Free a memory space*/
struct node * clearList(struct node *ptr)
{
    struct node *next;
    while(ptr != NULL)
    {
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return ptr;
}

/*Remove a Node by value of element*/
struct node * removeNodeByVal(struct node *ptr, int n)
{
    struct node *current, *prev, *head;
    head = ptr;
    prev = ptr;

    if(ptr == NULL){
            printf("List is empty.\n");
            exit(1);
    }
    while(ptr!= NULL)
        {
        if(ptr->val == n)
        {
            if(ptr == head && ptr->next == NULL)
            {
                free(ptr);
                ptr = NULL;
                head = ptr;
                continue;
            }
            if(ptr == head)
            {
                current = ptr->next;
                free(ptr);
                ptr = current;
                head = ptr;
                continue;
            }
            if(ptr->next == NULL)
            {
                prev->next = NULL;
                free(ptr);
                ptr = prev;
            }
            else
            {
            current = ptr->next;
            prev->next = current;
            free(ptr);
            ptr = current;
            }
        }
        prev = ptr;
        ptr = ptr->next;
    }
    return head;
}

/*Reverse a linked list*/
struct node * reverseList(struct node *ptr)
{
    struct node *prev = NULL;
    struct node *current, *nextnode;
    current = ptr;

    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    ptr = prev;
    return ptr;
}

/*Count number of nodes in the list*/
int countNodesInList(struct node *ptr)
{
    int count;
    count = 0;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
/*Remove node in the list by element*/
struct node * removeNodeInList(struct node *ptr, int n)
{
    struct node *head, *prev;
    int count;
    count = 0;
    head = ptr;
    prev = NULL;

    if(ptr == NULL)
    {
        printf("List is empty.\n");
        return ptr;
    }

    if(n > countNodesInList(ptr) || n <= 0 || n >= countNodesInList(ptr))
    {
        printf("Range of elements in the list between %d and %d.\n",count, countNodesInList(ptr));
        return ptr;
    }
    while(count != n)
    {
        prev = ptr;
        ptr = ptr->next;
        count++;
    }

    if(ptr == head && ptr->next == NULL)
        {
        free(ptr);
        head = NULL;
        }
    else if(ptr == head)
        {
        head = ptr->next;
        free(ptr);
        }
    else if(ptr->next == NULL)
        {
        prev->next = NULL;
        free(ptr);
        }
    else
        {
        prev->next = ptr->next;
        free(ptr);
        }

    return head;
}
