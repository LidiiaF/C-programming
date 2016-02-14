#include<stdio.h>
#include<stdlib.h>
#define RANGE 10
#define NUM 100
int random_val(int n);
void copy_val(int a[], int n, int m);
void sort_ar(int a[],int n);
void show_ar(int a[], int n);


int main(void)
{
    int ar[NUM];

    copy_val(ar,NUM,RANGE);
    show_ar(ar,NUM);
    putchar('\n');
    putchar('\n');
    sort_ar(ar,NUM);
    show_ar(ar,NUM);
    putchar('\n');
    putchar('\n');
    printf("%d", ar[100]);

    return 0;
}
int random_val(int n)
{
    int val;

    val = rand()% n + 1;
    return val;
}
void copy_val(int a[], int n, int m)
{
    int i;
    for(i = 0; i < n; i++)
        a[i] = random_val(m);
}
void show_ar(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
}
void sort_ar(int a[], int n)
{
    int temp,i,j;
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
