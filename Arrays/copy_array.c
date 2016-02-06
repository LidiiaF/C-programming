#include<stdio.h>
#define SIZE 5
void copy_v1(double ar[],double ar2[],int n);
void copy_v2(double ar[],double ar2[],int n);


int main(void)
{
    double source[SIZE] = {1.1,2.2,3.3,4.4,5.5};
    double f_ar[SIZE];
    double s_ar[SIZE];

    int i;

    for(i = 0; i < SIZE; i++)
        printf("%.1f ",source[i]);
    putchar('\n');

    copy_v1(source,f_ar, SIZE);
    putchar('\n');

    copy_v2(source,s_ar, SIZE);
    putchar('\n');

    return 0;
    }
void copy_v1(double ar[],double ar2[],int n)
{
    int j;
    for(j=0;j<n;j++){
        ar2[j] = ar[j];
        printf("%.1f ", ar2[j]);
}
}
void copy_v2(double ar[],double ar2[],int n)
{
    int k;
    for(k=0;k<n;k++){
        ar2[k] = *(ar + k);
        printf("%.1f ", ar2[k]);
}
}
