#include <stdio.h>
int main()
{
    int i=0;
    for (i=0;i<10;i++)
    {
        printf("%d\n",i);
        if (i=2)
        {
            break;
        }
    }
    printf("After breaking\n");
}