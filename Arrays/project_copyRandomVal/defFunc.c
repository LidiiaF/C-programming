#include "myFunc.h"
#include<stdio.h>
#include<stdlib.h>

static int randomValues(int n)
{
    int val;

    val = rand()% n + 1;
    return val;
}
void copyValues(int a[], int n, int m)
{
    int i;
    for(i = 0; i < n; i++)
        a[i] = randomValues(m);
}
void showArray(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
}
void sortArray(int a[], int n)
{
    int i;
    int j;
    int temp;
    temp = 0;

    for(i = 0;i < n; i++)
        for(j = i; j < (n - 1);j++)
            if(*(a + i) < *(a + j + 1))
            {
                temp = *(a + i);
                *(a + i) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
}
