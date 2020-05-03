#include<stdio.h>
#include<math.h>

isprime(int a)
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
    int n,i,j,A[100];
    printf("ENter a no.");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       A[i]=1;
    }
    A[0]=0;
    A[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(isprime(i))
        {
            for(j=2;i*j<n;j++)
            {
                A[i*j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(A[i]==1)
        {
            printf("%d\t",i);
        }
    }
}
