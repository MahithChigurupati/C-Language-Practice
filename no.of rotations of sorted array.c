
#include<stdio.h>
int rotations(int A[],int n)
{
    int i,mid,start=0,high=n-1;
    while(start<=high)
    {
        if(A[start]<=A[high])
        {
            return start;
        }
        mid=start+(high-start)/2;
        int next=(mid+1)%n;
        int prev=mid+n-1;
        if(A[mid]<A[next] && A[mid]<A[prev])
        {
            return mid;
        }
        else if(A[mid]<=A[high])
        {
            high=mid-1;
        }
        else if(A[mid]>=A[start])
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
    q=rotations(A,N);
    printf("rotations are %d",q);

}
