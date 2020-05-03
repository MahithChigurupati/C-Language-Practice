
#include<stdio.h>
int iterative_binary_search(int A[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            return i;
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
    q=iterative_binary_search(A,N,X);
    if(q!=-1)
    {
        printf("Found at Position %d",q+1);
    }
    else
    {
        printf("NOT FOUND");
    }

}
