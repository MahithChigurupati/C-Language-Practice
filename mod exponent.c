#include<stdio.h>
int mod(int x,int n,int m)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        if(n%2==0)
        {
            int y=mod(x,n/2,m);
            return (y*y)%m;
        }
        else
        {
            return ((x%m)*mod(x,n-1,m))%m;
        }
    }
}

int main()
{
    int x,n,m;
    printf("Enter a no.");
    scanf("%d",&x);
    printf("Enter a power");
    scanf("%d",&n);
    printf("enter a mod");
    scanf("%d",&m);
    printf("%d",mod(x,n,m));

}

