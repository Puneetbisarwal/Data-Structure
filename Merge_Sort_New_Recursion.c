

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

int L[n1],R[n2];

for( i=0;i<n1;i++)
L[i] = Array[start+i];

for( j=0;j<n2;j++)
R[j] = Array[middle+1+j];


i=0,j=0;
k=start;

while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
Array[k]=L[i];
i++;
}
else
{
Array[k]=R[j];
j++;
}
k++;
}



while(i<n1)
{
Array[k]=L[i];
i++;
k++;
}

while(j<n2)
{
Array[k]=R[j];
j++;
k++;
}
//printf("\n\nThe value of After I= %d J= %d and K=%d",i,j,k);

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
printf("\nSorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);


}
