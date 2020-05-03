#include<stdio.h>

int euclids(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}


int main()
{
    int a,b,q;
    printf("Enter a,b");
    scanf("%d%d",&a,&b);
    q=euclids(a,b);
    printf("%d",q);
}
