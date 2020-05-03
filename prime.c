#include<stdio.h>
int main()
{
    int a,i,flag=0;
    printf("Enter a no.");
    scanf("%d",&a);
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not a Prime");
    }
}
