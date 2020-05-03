#include<stdio.h>
int Binary_Search(int A[],int n,int value)
{
    int i,mid,start=0,end=n-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]==value)
        {
            return mid;
        }
        else if(value<A[mid])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
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
    q=Binary_Search(A,N,X);
    if(q!=-1)
    {
        printf("Found at Position %d",q+1);
    }
    else
    {
        printf("NOT FOUND");
    }

}
