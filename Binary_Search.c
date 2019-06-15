
//Time Complexity: O(logn)


//Space Complexity: O(1)


#include<stdio.h>

int Binary_Search(int A[],int number,int search)
{
int start=0,last=number-1;

while(start<=last)
{
    int mid=start+(last-start)/2;

if(search==A[mid])
return mid;

if(search<A[mid])
last=mid-1;

else start=mid+1;
}
return -1;
}

void main()
{
int n,i,x,arr[1000];
printf("\n---Binary Search---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Enter the Number to be Searched = ");
scanf("%d",&x);

int result = Binary_Search(arr,n,x);

if(result ==-1)
    printf("The Number %d is not found.",x);

else
printf("The Number %d is found at index %d.",x,result+1);

}
