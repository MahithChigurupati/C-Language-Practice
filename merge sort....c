#include<stdio.h>
int Merge(int L[],int nl,int R[],int nr,int A[])
{
    int i,j,k;
    //nl=len(L);
    //nr=len(r);
    while(i<nl &&j<nr)
    {
        if(nl<nr)
        {
            A[k]=L[i];
            i=i+1;
        }
        else
        {
            A[k]=R[i];
            j=j+1;
        }
        k=k+1;
        while(i<nl)
        {
            A[k]=L[i];
            i=i+1;
            k=k+1;
        }
        while(j<nr)
        {
            A[k]=R[i];
            i=i+1;
            k=k+1;
        }
    }
}
int Merge_Sort(int A[],int n)
{
    int i,j,mid;
    //n=len(A);
    if(n<2)
    {
        return;
    }
    mid=n/2;
    int left[mid],right[mid];
    for(i=0;i<mid;i++)
    {
        left[i]=A[i];
    }
    for(j=mid+1;j<n;j++)
    {
        right[j-mid]=A[j];
    }
    Merge_Sort(left,mid);
    Merge_Sort(right,n-mid);
    Merge(left,mid,right,n-mid,A);
}


int main()
{
    int N,i,A[100];
    printf("Enter No. of Elements\n");
    scanf("%d",&N);
    printf("Emter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    Merge_Sort(A,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
}
