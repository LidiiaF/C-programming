#include<stdio.h>
#define MAX 5

void push(int ar[], int m);
void pop(void);
void sizeStack(void);
void printStack(int ar[]);

int top = 0;

int main(void)
{

    int myStack[MAX];

    printf("Size of stack is array of %d elements.\n",MAX);

    sizeStack();

    push(myStack, 4);
    push(myStack, 7);
    push(myStack, 9);
    push(myStack, 5);
    push(myStack, 3);


    printStack(myStack);

    sizeStack();

    pop();
    printStack(myStack);
    sizeStack();

    push(myStack, 2);
    printStack(myStack);
    sizeStack();

    return 0;
}

void push(int ar[], int m)
{
    if(MAX <= top)
        printf("Error: stack overflow.\n");
    else
    {
        ar[top] = m;
        top = top + 1;
    }
}

void pop(void)
{
    if(top == 0)
        printf("Stack is empty.\n");
    else
        top = top - 1;
}

void sizeStack(void)
{
    if(top == 0)
        printf("Stack is empty.\n");
    else if (top == MAX)
        printf("Stack overflow.\n");
    else
        printf("Top of stack is %d element of array.\n",top);
}

void printStack(int ar[])
{
    int i;

    for(i = 0; i < top; i++)
        printf("element[%d] = %d\n", i, ar[i]);
}
