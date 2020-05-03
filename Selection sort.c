#include<stdio.h>
int selection_sort(int A[],int N)
{
    int i,j,temp,imin;
    for(i=0;i<N-1;i++)
    {
        imin=i;
        for(j=i+1;j<N;j++)
        {
            if(A[j]<A[imin])
            {
                imin=j;
            }
            temp=A[i];
            A[i]=A[imin];
            A[imin]=temp;
        }
    }
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
    selection_sort(A,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
}
