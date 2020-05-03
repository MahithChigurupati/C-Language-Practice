#include<stdio.h>
int A[100];
int fib(int n)
{
    int i;
    if(n<=1)
    {
        return n;
    }
    else
    {
        if(A[n]!=1)
        {
            return A[n];
        }
        else
        {
        A[n]=fib(n-1)+fib(n-2);
        return A[n];
        }
    }
}


int main()
{
    int n,i,a;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        A[i]=1;
    }
    a=fib(n);
    printf("%d",a);
}
