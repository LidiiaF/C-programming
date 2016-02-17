#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp;
    int count = 0;


    if((fp = fopen("test.txt","r")) == NULL)
    {
        printf("Can't open the file\n");
        exit(1);
    }

    else if((fp = fopen("test.txt","r")) != NULL)
    {
        printf("File open\n");

    }
    printf("File contents: ");
    while((ch = getc(fp))!= EOF)
    {
        putc(ch,stdout);
        count++;

    }
    printf("In the file %d symbols \n",count);

    if(fclose(fp)== EOF)
        printf("Error close file\n");
    else
        printf("File closed");

    return 0;
}
