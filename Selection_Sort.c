#include<stdio.h>


int main()
{

int n,i,j,temp,iMin,arr[1000];
printf("\n---Selection Sorting---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++)
{
iMin=i;

for(j=i+1;j<n;j++)
{

if(arr[j]<arr[iMin])
iMin=j;

}

temp=arr[i];
arr[i]=arr[iMin];
arr[iMin]=temp;
}

printf("Sorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);


}


