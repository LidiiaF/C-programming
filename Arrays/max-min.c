#include <stdio.h>
#define LEN 10

int res(const int ar[], int n);
void show_arr(const int ar[], int n);

int main(void)
{
    int source[LEN] = {5,8,10,6,1,3,7,14,9,4};
    int x;

    show_arr(source, LEN);
    x = res(source, LEN);

    printf("%d = max value - min value\n", x);

    return 0;
}

int res(const int ar[], int n)
{
    int i;


    int min = ar[0];
    int max = ar[0];
    int y;


    for (i = 0; i < n; i++)
    {
        if(min > ar[i])
            min = ar[i];

        if (max < ar[i])
            max = ar[i];
    }
    y = max - min;
    return y;
}
void show_arr(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}
