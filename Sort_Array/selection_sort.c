#include<stdio.h>
#define SIZE 5
int main(void)
{
    char arr[SIZE] = {'c','b','d','a','e'};
    int i,j,n;
    char temp;
    for(i = 0;i < SIZE; i++)
        for(j = i; j < (SIZE - 1);j++){
            if(*(arr + i) > *(arr + j + 1))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
      for(n = 0;n < SIZE; n++)
                printf("%c",arr[n]);
    return 0;
}
