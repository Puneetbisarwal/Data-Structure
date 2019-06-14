
//Worst and Average Case Time Complexity: O(n*n)

//Best Case Time Complexity: O(n)

//Auxiliary Space: O(1)




#include<stdio.h>

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;

}


int main()
{

int n,i,j,temp,arr[1000];
printf("\n---Bubble Sorting---\n\n\n");

printf("Enter the Number of Elements = ");
scanf("%d",&n);

printf("Enter %d element \n",n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++)
{
int flag=0;

for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{

swap(&arr[j], &arr[j+1]);
flag=1;
}
}

if(flag==0)
break;
}

printf("Sorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);

}

