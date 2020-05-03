#include<stdio.h>
#include<math.h>
int isprime(int a)
{
    int i,flag=0;
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
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i,n;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(isprime(i))
        {
            printf("%d\t",i);
        }
    }
}
