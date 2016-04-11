#include<stdio.h>
#include<ctype.h>
#define MAX 10

void push(char n);
void pop(void);
int checkPrecedence(char n);
int compareTwoOper(char n);

char stack[MAX];
int top = -1;

int main(void)
{
    char ch;

    printf("Infix to postfix conversion.\nEnter infix expression and press Enter, for exit press q:\n");

     while((ch = getchar()) != 'q')
     {
        if(ch == '\n')
        {
            while(top >= 0)
            {
                putchar(stack[top]);
                pop();
            }
            printf("\nEnter next infix expression and press Enter, for exit press q:\n");
        }
        else if(isdigit(ch))// If ch is character of a number print a number.
        {
            putchar(ch);
        }

        else if(ispunct(ch))//If ch is character of an operator.
        {
            if(top == -1) // If stack is empty add operator in a stack.
                {
                push(ch);
                }
            else
            {
                if(compareTwoOper(ch) == 0)//If precedence of character equal or less then top element of stack
                                           //print content of stack while stack doesn't empty.
                {
                    while(compareTwoOper(ch) == 0 && top >= 0)
                    {
                        putchar(stack[top]);
                        pop();
                    }


                    push(ch);
                }

                else if (compareTwoOper(ch) == 1)//If operator from input has higher precedence
                                                 //then top operator of a stack push ch in the stack.
                    push(ch);
            }
        }

     }
    return 0;
}

/*Function Push increases size of a stack
and adds element from input into the stack.*/
void push(char n)
{
    top++;
    stack[top] = n;

}

/*Function Pop decreases size of a stack.*/

void pop(void)
{
    top--;
}

/*Function checkPrecedence accepts character of an operator
and returns 0 if character has less precedence or 1 if
character has higher precedence.*/

int checkPrecedence(char n)
{
    if(n == '+' || n == '-')
        return 0;
    else if (n == '*' || n == '/')
        return 1;
}


/*Function compareTwoOper compares operator from input
and top element of character from a stack and returns 0
if character from input equal or less precedence then
character from top of a stack, or 1 if character from input
has higher precedence.*/

int compareTwoOper(char n)
{
    if(checkPrecedence(n) == checkPrecedence(stack[top]) || checkPrecedence(n) < checkPrecedence(stack[top]))
        return 0;
    if(checkPrecedence(n) > checkPrecedence(stack[top]))
        return 1;
}
