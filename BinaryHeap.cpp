// Heap :- A Complete Binary Tree when represented as an array should not have any blank spaces in between.
// It should follow any of one either Max Heap or Min Heap.

/*
//Insertion in a Heap
// Note :- Here A[] is the array for Heap and n is the index of the array where the number is to be inserted.

void insert(int A[],int n){
    int temp,i=n;
    temp =A[n];
    while (i>1&&temp>a[i])
    {
        A[i]=A[i/2];
        i/=2;
    }
    A[i]=temp;
}
*/

// Creating a Heap
// In place Heap creation - When the Heap is created within a single array.
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int A[]={0,10,20,43,54,23,21};
     for (int i = 1; i <= 7; i++)
     {
         insert(A,i);
     }
     

     return 0;
 }
