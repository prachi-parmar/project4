#include<stdio.h>
int main()
{
    int i , j , num ;
    printf("enetr the num :");
    scanf("%d",&num);

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}