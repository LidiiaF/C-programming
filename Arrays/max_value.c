#include <stdio.h>
#define LEN 10

int max_val(const int ar[], int n);

void show_arr(const int ar[], int n);

int main(void)
{
    int sourse[LEN] = {5,8,10,6,1,3,7,14,9,4};
    int max;

    show_arr(sourse, LEN);
    putchar('\n');
    max = max_val(sourse, LEN);

    printf("%d = is largest value of the array\n", max);

    return 0;
}

int max_val(const int ar[], int n)
{
    int i;
    int max = ar[0];

    for (i = 0; i < n; i++)
        if (max < ar[i])
        {
            max = ar[i];
        }
    return max;
}
void show_arr(const int ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}
