#include <stdio.h>

int main(void)
{
    char n;
    char m = 5;
    char ch;
    int size = 8 * sizeof(char);

    int i = 0;
    int j = 0;

        for (i = size - 1; i >= 0; i--)
        {
            if(j % 4 == 0 && j!=0)
                putchar(' ');
            n = m >> i;
            ch = (1 & n) + '0';
            putchar(ch);
            j++;
        }
    return 0;
}

