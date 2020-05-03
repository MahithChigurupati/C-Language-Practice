#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            if(i!=sqrt(n))
            {
                printf("%d\t",n/i);
            }
        }
    }
}
