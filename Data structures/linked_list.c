#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node * next;
};
int main(void)
{
    struct node *head = NULL;
    struct node *current, *prev;

    printf("Enter 5 numbers:\n");

    int n = 5;

    while(n > 0)
    {
        current = (struct node *) malloc(sizeof(struct node));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        scanf("%d", &current->val);

        while(getchar() != '\n')
            continue;
        prev = current;
        n--;
    }
    printf ("List:\n");

    current = head;
    while (current != NULL)
    {
        printf("Address %p: %d next address:%p\n", current, current->val, current->next);
        current = current->next;
    }
    current = head;

    while (current != NULL)
    {
        prev = current->next;
        free(current);
        current = prev;
    }
    printf("Allocated memory is free!\n");

    return 0;
}
