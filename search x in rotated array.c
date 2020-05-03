#include<stdio.h>
int search(int a[],int n,int x)
{
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(x==a[mid])
        {
            return mid;
        }
        else if(a[mid]<a[end])
        {
            if(x>a[mid] && x<=a[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        else
        {
            if(x>=a[start] && x<a[mid])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    }
    return -1;
}

int main()
{
    int N,i,A[100],X,q;
    printf("Enter No. of Elements\n");
    scanf("%d",&N);
    printf("Emter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter x to search\n");
    scanf("%d",&X);
    q=search(A,N,X);
    if(q!=-1)
    {
        printf("Found at Position %d",q+1);
    }
    else
    {
        printf("NOT FOUND");
    }

}
