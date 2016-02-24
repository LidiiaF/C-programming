#include<stdio.h>
#define SIZE 8

void addVinArray(char *ar, int n);
void newArray(char *ar, char *ar2, int m);
void showArray(char *ar);
void resultArray(char *ar,char *ar2, int m);

int main(void)

{
    int n = 98;
    int m = 2;

    char myArray[SIZE];
    char tempArray[m];

    addVinArray(myArray, n);
    showArray(myArray);
    putchar('\n');

    newArray(myArray, tempArray, m);

    int d;
    d = n << m;
    addVinArray(myArray, d);
    showArray(myArray);
    putchar('\n');

    resultArray(myArray, tempArray, m);
    showArray(myArray);

    return 0;
}
void addVinArray(char *ar, int n)
{
    int i;
    for (i = SIZE - 1; i >= 0; i--)
            {
            if((n%2) == 0)
            ar[i] = '0';
            else ar[i] = '1';
            n = n/2;
            }
    ar[SIZE] = '\0';
}
void showArray(char *ar)
{
    int j;
    for(j = 0; j < SIZE; j++)
        {
        if(j % 4 == 0 && j != 0)
            putchar(' ');
        printf("%c",ar[j]);
        }
}
void resultArray(char *ar, char *ar2, int m)
{
    int i;
    int j;
    for(i = SIZE - m, j = 0; i < SIZE; i++, j++)
        ar[i] = ar2[j];
}
void newArray(char *ar, char *ar2, int m)
{
    int i;

    for(i = 0; i < m; i++)
        ar2[i] = ar[i];

}
