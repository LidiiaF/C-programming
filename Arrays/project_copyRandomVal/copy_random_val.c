#include<stdio.h>
#include<stdlib.h>
#include "myFunc.h"
#define RANGE 10
#define NUM 100

int main(void)
{
    int ar[NUM];

    copyValues(ar,NUM,RANGE);
    showArray(ar,NUM);
    putchar('\n');
    putchar('\n');
    sortArray(ar,NUM);
    showArray(ar,NUM);
    putchar('\n');
    putchar('\n');

    return 0;
}
