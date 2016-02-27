#include<stdio.h>

void copyValInArray(unsigned char *ar, unsigned char n);
void showArray(unsigned char *ar);

int main(void)
{
    unsigned char n = 95;
    unsigned char m = 3;
    unsigned char size = 8*sizeof(unsigned char);
    unsigned char mask, res, flags;
    unsigned char ar[size];


    printf("Number %d in binary numeric system : \n", n);
    copyValInArray(ar, n);
    showArray(ar);
    putchar('\n');

    mask = n >> (size - m);
    flags = n << m;
    res = flags | mask;
    printf("Number %d after circular shift to the left on %d position = %d \n", n, m, res);
    copyValInArray(ar, res);
    showArray(ar);

    return 0;
}
void copyValInArray(unsigned char *ar, unsigned char n)
{
    unsigned char size = 8*sizeof(unsigned char);
    int i;
    for (i = size - 1; i >= 0; i--)
            {
            if((n%2) == 0)
            ar[i] = '0';
            else ar[i] = '1';
            n = n/2;
            }
}
void showArray(unsigned char *ar)
{
    unsigned char size = 8*sizeof(unsigned char);
    int j;
    for(j = 0; j < size; j++)
        {
        if(j % 4 == 0 && j != 0)
            putchar(' ');
        printf("%c",ar[j]);
        }
}
