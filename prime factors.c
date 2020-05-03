#include<stdio.h>

int main()
{
    int n,c,i;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c=0;
            while(n%i==0)
            {
                n=n/i;
                c++;
            }
            printf("%d has %d times\n",i,c);
        }
    }
    if(n!=1)
    {
        printf("%d has 1 time",n);
    }
}
