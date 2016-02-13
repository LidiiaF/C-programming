#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void copy_ar(double ar[],int n);


int main(void)
{
    double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};

    copy_ar(source,SIZE);
    putchar('\n');

    return 0;
}
void copy_ar(double ar[],int n)
{
    double *temp = (double *)malloc(SIZE * sizeof(double));
    int j;
    for(j = 0; j < n; j++)
        {
        temp[j] = ar[j];
        printf("%.1f ",temp[j]);
        }
        free(temp);
}
