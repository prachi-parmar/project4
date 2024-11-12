#include<stdio.h>
int main()
{
    int i , j ,n =5 , k ;

    for(i=n;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        for(j=n-1;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    } 
}  
