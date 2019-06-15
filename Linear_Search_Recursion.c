

//Time Complexity: O(n)


//Space Complexity: O(n)


#include<stdio.h>


int Linear_Search(int A[],int start,int end,int search)
{

    if(end<start)
    return -1;

    if(A[start]==search)
    return start;

    if(A[end]==search)
    return end;

    return Linear_Search(A,start+1,end-1,search);
}


void main()
{

int n,i,x,flag=0,arr[1000];
printf("\n---Linear Search---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter the Number to be Searched = ");
scanf("%d",&x);



int result = Linear_Search(arr,0,n-1,x);



if(result==-1)
    printf("The Number %d is not found.",x);

 else
printf("The Number %d is found at index %d.",x,result+1);

}
