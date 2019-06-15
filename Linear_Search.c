
//Time Complexity: O(n)


//Space Complexity: O(n)

#include<stdio.h>


int Linear_Search(int A[],int number,int search)
{

    for(int i=0;i<number;i++)
    {
        if(A[i]==search)
            return i;
    }
    return -1;
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

/*
for(i=0;i<n;i++)
{
if(x==arr[i])
{
flag=1;
break;
}
}

if(flag==1)
printf("The Number %d is found at index %d.",x,i+1);

 else
printf("The Number %d is not found.",x);


*/

int result = Linear_Search(arr,n,x);



if(result==-1)
    printf("The Number %d is not found.",x);

 else
printf("The Number %d is found at index %d.",x,result+1);

}
