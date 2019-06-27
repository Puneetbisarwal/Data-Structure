

 //Time complexity of Heapify = O(Logn).

 //Time complexity of create_And_BuildHeap() = O(n)

 //Overall Time complexity of Heap Sort = O(nLogn).



//Worst Case Time Complexity: O(n*logn)

//Best Case Time Complexity: O(n*logn)

//Average Case Time Complexity: O(n*logn)

//Space Complexity: O(1)


#include <iostream>

using namespace std;


void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;

}

void Max_Heapify(int Array[], int number, int i)
{

    int largest;
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2


    if (l < number && Array[l] > Array[i])
        largest = l;

        else
        largest=i;


    if (r < number && Array[r] > Array[largest])
        largest = r;


    if (largest != i)
    {
        swap(Array[i], Array[largest]);


        Max_Heapify(Array, number, largest);
    }
}

void Build_Max_Heap(int A[],int size)
{
for(int i=size/2-1;i>=0;i--)
Max_Heapify(A, size, i);

for (int i=size-1; i>=0; i--)
    {
        swap(A[0], A[i]);
        Max_Heapify(A, i, 0);
    }
}


int main()
{

int n,i,arr[1000];
cout<<"\n---Heap Sorting Recursion---\n\n\n";

cout<<"Enter the Number of Elements = ";
cin>>n;

cout<<"Enter " <<n <<" element \n";

for(i=0;i<n;i++)
{
cin>>arr[i];
}

Build_Max_Heap(arr,n);
cout<<"\nSorted list in Ascending Order :\n";

for(i=0;i<n;i++)
cout<<endl<<arr[i];


}
