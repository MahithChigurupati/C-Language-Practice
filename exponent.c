#include<stdio.h>
int exp(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        if(n%2==0)
        {
            int y=exp(x,n/2);
            return y*y;
        }
        else
        {
            return x*exp(x,n-1);
        }
    }
}

int main()
{
    int x,n;
    printf("Enter a no.");
    scanf("%d",&x);
    printf("Enter a power");
    scanf("%d",&n);
    printf("%d",exp(x,n));

}
