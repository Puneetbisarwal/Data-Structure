
//Time Complexity: O(logn)


//Space Complexity: O(logn)

#include<stdio.h>

int Binary_Search(int A[],int start,int last,int search)
{


while(start<=last)
{
    int mid=start+(last-start)/2;

if(search==A[mid])
return mid;

if(search<A[mid])
 return Binary_Search(A,start,mid-1,search);


return Binary_Search(A,mid+1,last,search);
}
return -1;
}

void main()
{
int n,i,x,arr[1000];
printf("\n---Binary Search Recursion---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter the Number to be Searched = ");
scanf("%d",&x);

int result = Binary_Search(arr,0,n-1,x);

if(result !=-1)
  printf("The Number %d is found at index %d.",x,result+1);


else
printf("The Number %d is not found.",x);

}
