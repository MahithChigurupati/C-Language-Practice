insertion_sort(int A[],int n)
{
    int hole,i,value;
    for(i=1;i<n;i++)
    {
       value=A[i];
       hole=i;
        while(hole>0 && A[hole-1]>value)
        {
            A[hole]=A[hole-1];
            hole=hole-1;
        }
        A[hole]=value;
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
    insertion_sort(A,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
}
