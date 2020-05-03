#include<stdio.h>
int Binary_Search(int A[],int start,int end,int value)
{
    int i,mid;
    if(start>end)
    {
        return -1;
    }
        mid=start+(end-start)/2;
        if(A[mid]==value)
        {
            return mid;
        }
        else if(value<A[mid])
        {
            return Binary_Search(A,start,mid-1,value);
        }
        else
        {
            return Binary_Search(A,mid+1,end,value);
        }
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
    q=Binary_Search(A,0,N,X);
    if(q!=-1)
    {
        printf("Found at Position %d",q+1);
    }
    else
    {
        printf("NOT FOUND");
    }

}

