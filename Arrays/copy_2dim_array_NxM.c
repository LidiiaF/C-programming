#include<stdio.h>

void copy_dim_array(int r, int c, int ar[r][c]);

int main(void)
{
    int d_ar[3][5] = {{8,4,5,9,1},{7,3,1,2,8},{3,2,1,4,5}};

    copy_dim_array(3,5,d_ar);

    return 0;
}
void copy_dim_array(int r, int c, int ar[r][c])
{
    int temp[r][c];
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        *(*(temp+r)+c)= *(*(ar+i)+j);
        printf("%d",*(*(temp+r)+c));
        }
        putchar('\n');
    }
}
