
//Time Complexity: O(n*n)

//Auxiliary Space: O(1)


#include<stdio.h>


int main()
{
int n,i,j,temp,arr[1000];
printf("\n---- Insertion Sorting ----\n\n\n ");
printf("Enter the Number of Elements = ");
scanf("%d",&n);


printf("Enter %d element \n",n);


for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

for(j=1;j<n;j++)
{
temp=arr[j];
i=j-1;

while(i>=0 && arr[i]>temp)
{
arr[i+1]=arr[i];
i=i-1;
}
arr[i+1]=temp;
}
printf("Sorted list in Ascending order :\n");

for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
