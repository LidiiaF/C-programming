#include<stdio.h>
#define SIZE 5
int main(void)
{
    char arr[SIZE] = {'c','a','d','e','b'};

    int i,j,n;
    char temp;

    for(i = 1;i < SIZE; i++)
        for(j = 1; j < SIZE; j++)
            if(*(arr + j) < *(arr + j - 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j - 1);
                *(arr + j - 1) = temp;
            }
    for(n = 0;n < SIZE;n++)
        printf("%c",*(arr + n));

    return 0;
}
