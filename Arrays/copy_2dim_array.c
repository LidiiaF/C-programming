#include<stdio.h>
#define ROWS 5
#define COLS 2

void copy_dim_array(double s_ar[][2],double s_ar2[][2],int n);

int main(void)
{
    double d_arr[ROWS][COLS] = {{2,1},{3,6},{0,9},{8,7},{5,4}};
    double t_arr[ROWS][COLS];
    int i,j;

        for(j=0;j<ROWS;j++)
            for(i=0;i<COLS;i++)
                printf("%.f ", *(*(d_arr + j)+i));
    putchar('\n');
    copy_dim_array(d_arr,t_arr,ROWS);

return 0;

}
void copy_dim_array(double s_ar[][2],double s_ar2[][2],int n)
{
    int i, j;
    for(i=0;i<n;i++)
        for(j=0;j<COLS;j++)
        {
        *(*(s_ar2 + i)+j) = *(*(s_ar + i)+j);
        printf("%.f ", *(*(s_ar2 + i)+j));
        }
}
