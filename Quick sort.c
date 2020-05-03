#include<stdio.h>


int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}



int partition(int A[],int start,int end)
{
    int pivot,i,pindex,temp;
    pivot=A[end];
    pindex=start;
    for(i=start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            //swap(A[i],A[pindex]);
            temp=A[i];
            A[i]=A[pindex];
            A[pindex]=temp;
            pindex=pindex+1;
        }
    }
    //swap(A[pindex],A[end]);
    temp=A[pindex];
    A[pindex]=A[end];
    A[end]=temp;
    return pindex;
}


int Quick_Sort(int A[],int start,int end)
{
    int p_index;
    if(start<end)
    {
        p_index=partition(A,start,end);
        Quick_Sort(A,start,p_index-1);
        Quick_Sort(A,p_index+1,end);
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
    Quick_Sort(A,0,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
}
