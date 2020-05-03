#include<stdio.h>
int Binary_Search(int A[],int n,int value,int q)
{
    int i,mid,start=0,end=n-1,result=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]==value)
        {
            result= mid;
            if(q==1)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }

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
    return result;
}


int main()
{
    int N,i,A[100],X,q,first,last;
    printf("Enter No. of Elements\n");
    scanf("%d",&N);
    printf("Emter %d elements\n",N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter x to search\n");
    scanf("%d",&X);
    first=Binary_Search(A,N,X,0);
    if(first==-1)
    {
        printf("Not found");
    }
    else
    {
        last=Binary_Search(A,N,X,1);
        printf("occurences are %d",(last-first)+1);
    }

}

