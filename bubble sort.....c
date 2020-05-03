#include<stdio.h>
int swap(int q,int w)
{
    int temp;
    temp=q;
    //printf("%d",temp);
    q=w;
    w=temp;
    //printf("%d",w);
    //return w;
}


int Bubble_Sort(int A[],int n)
{
    int i,flag,j,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
               /* temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;*/
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
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
    Bubble_Sort(A,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
}

