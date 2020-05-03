#include<stdio.h>
struct point
{
    double x,y;
};

point a,point b;


double cross_product(point a,point b)
{
    return a.x*b.y-b.x*a.y;
}

double area(point[] vertices,int n)
{
    for(i=0;i<n;i++)
    {
        sum+=cross_product(vertices[i],vertices[(i+1)%n])
    }
    return abs(sum)/2.0;
}

int main()
{
    int A[100],i;
    printf("enter n");
    scanf("%d",&n);
    printf("enter coordinates of polygon");
    for(i=0;i<n;i++)
    {
        scanf("%d",);
    }

}
