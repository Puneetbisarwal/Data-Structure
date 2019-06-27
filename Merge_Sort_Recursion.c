

//Worst Case Time Complexity: O(nlogn)

//Best Case Time Complexity: O(nlogn)

//Average Case Time Complexity: O(nlogn)

//Space Complexity: O(n)



#include<stdio.h>
#include <limits.h>


int Merge(int Array[],int start,int middle,int end)
{
int i,j,k;
int n1 = middle-start+1;
int n2 = end-middle;

int L[n1+1],R[n2+1];

for( i=0;i<n1;i++)
L[i] = Array[start+i];

for( j=0;j<n2;j++)
R[j] = Array[middle+1+j];

L[n1]= INT_MAX;
R[n2]=INT_MAX;
i=0,j=0;



for(k =start; k<=end; k++)
{
if(L[i]<=R[j])
{
Array[k]= L[i];
i=i+1;
}
else
{
Array[k]=R[j];
j=j+1;
}


}



}



int Merge_Sort(int A[],int p, int r)
{
if (p<r)
{
int q =p+(r-p)/2;
Merge_Sort(A,p,q);
Merge_Sort(A,q+1,r);
Merge(A,p,q,r);
}
}



int main()
{

int n,i,arr[1000];
printf("\n---Merge Sorting Recursion---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

Merge_Sort(arr,0,n-1);
printf("Sorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);


}
