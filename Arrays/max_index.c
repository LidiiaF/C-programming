#include <stdio.h>
#define LEN 10

int max_index(const int ar[], int m);
void show_arr(const int ar[], int n);

int main(void)
{
    int source[LEN] = {5,8,10,6,1,3,7,14,9,4};
    int max_i;

    show_arr(source, LEN);
    max_i = max_index(source, LEN);
    printf("%d = index of largest value of the array.\n", max_i);

    return 0;
}
int max_index(const int ar[], int n)
{
    int i;
    int x;
    int max = ar[0];

    for (i = 1; i < n; i++)
        if (max < ar[i])
        {
            max = ar[i];
            x = i;
        }
    return x;
}
void show_arr(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}
