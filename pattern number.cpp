#include <stdio.h>
main()
{
    int i, j;
    printf("enter number :");
    scanf("%d",&j);
    
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
