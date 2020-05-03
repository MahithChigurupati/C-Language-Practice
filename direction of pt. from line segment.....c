#include<stdio.h>
struct point
{
    double x,y;
};

const int left=-1,right=1,on_line=0;

double cross_product(point a,point b)
{
    return a.x*b.y-b.x*a.y;
}

point subtract(point a,point b)
{
    point result;
    result.x=p1.x-p2.x;
    result.y=p1.y-p2.y;
    return result;
}


int getdirection(point a,point b,point p)
{
    b=subtract(b,a);
    p=subtract(p,a);
    double cross=cross_product(b,p);
    if(cross>0)
    {
        return left;
    }
    else if(cross<0)
    {
        return right;
    }
    else
    {
        return on_line;
    }
}


int main()
{
    int i;
    printf("Enter value of n");
    scanf("%d",&n);
    printf("Emter coordinates");
    for(i=0;i<n;i++)
    {
        scanf("%d",)
    }
}
