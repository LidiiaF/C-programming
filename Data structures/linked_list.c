#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};
int main(void)
{
    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *current, *prev, *nextnode;
    int n;

    printf("Enter numbers, q for end of input:\n");

    /*Initialize a linked list*/
    while(scanf("%d", &n) == 1)
    {
        while(getchar() != '\n')
            continue;
        current = (struct node *) malloc(sizeof(struct node));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        tail = prev->next;
        current->next = NULL;
        current->val = n;
        prev = current;
    }
    while(getchar() != '\n')
            continue;

    /*Show a linked list*/
    if (head == NULL)
    {
        printf("No data entered.");
        exit(1);
    }

    printf ("Linked list:\n");

    current = head;
    while (current != NULL)
    {
        printf("Address %p: value = %d, next address = %p\n", current, current->val, current->next);
        current = current->next;
    }
    putchar('\n');

    /*Add elements to the tail of a linked list*/
    printf("Enter numbers that you would like add to the list, q for end of input:\n");

    prev = tail;

    while(scanf("%d", &n) == 1)
    {
        while(getchar() != '\n')
            continue;
        current = (struct node *) malloc(sizeof(struct node));
        prev->next = current;
        current->next = NULL;
        current->val = n;
        prev = current;
    }

    /*Show a linked list*/
    printf ("Linked list with added elements:\n");
    current = head;
    while (current != NULL)
    {
        printf("Address %p: value = %d, next address = %p\n", current, current->val, current->next);
        current = current->next;
    }
    putchar('\n');

    /*Reverse a linked list*/
    printf("Reverse of the linked list:\n");

    current = head;
    prev = NULL;
    while(current != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;

    /*Show a reversed linked list*/
    current = head;
    while (current != NULL)
    {
        printf("Address %p: value = %d, next address = %p\n", current, current->val, current->next);
        current = current->next;
    }

    /*Free the memory space*/
    current = head;
    while (current != NULL)
    {
        nextnode = current->next;
        free(current);
        current = nextnode;
    }
    putchar('\n');

    printf("Allocated memory is free!\n");
    return 0;
}
