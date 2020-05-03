#include<stdio.h>
int main()
{
    int n,i,f1,f2,f;
    printf("Enter a no.");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d\t%d\t",f1,f2);
    for(i=2;i<=n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d\t",f);
    }
}
