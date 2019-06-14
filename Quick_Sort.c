

//Worst Case Time Complexity: O(n*n)

//Best Case Time Complexity: O(nlogn)

//Average Case Time Complexity: O(nlogn)

// Space Complexity: O(nlogn)

#include<stdio.h>


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;

}


int Partition(int A[],int first,int last)
{
int i,j,x;
x=A[last];
i=first-1;

for(j=first; j<last;j++)
{
if(A[j]<=x)
{
i=i+1;
swap( &A[i] , &A[j] );
}
}
swap( &A[i+1], &A[last] );
return (i+1);
}

void Quick_Sort(int a[],int start,int end)
{
int q;
if(start<end)
{
q=Partition(a,start,end);
Quick_Sort(a,start,q-1);
Quick_Sort(a,q+1,end);
}
}

int main()
{

int n,i,arr[1000];
printf("\n---Quick Sorting---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

Quick_Sort(arr,0,n-1);
printf("Sorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);


}
