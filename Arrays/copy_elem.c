#include<stdio.h>
#define LEN 7
#define LEN2 3

int main(void)
{
    int ar [LEN] = {5,8,9,3,1,6,0};
    int ar2[LEN2];

    copy_el(&ar[3],&ar2,LEN2);

return 0;
}
void copy_el(int s_ar[],int s_ar2[],int n)
{
    int i;
    for(i=0;i<n;i++){
        *(s_ar2 + i) = *(s_ar + i);
        printf("%d ", *(s_ar2 + i));
        }
}
