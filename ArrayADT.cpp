// ADT(Array as abstract data type)-Array Data Structure and set of Operations.
/*
Note:-These are just properties and not a pre defined function 
1. Display()
2. Add() or Append()
3. Insert()
4. Delete()
*/
/*
5. Searching:-
  5.1.Linear Search - Searching one by one.(O(1 to n))
 
  linear_search(arr,key,n){
      for(int i=0,i<arr.length(),i++){
       if(arr[i]==key){
           return i;
       }
      }
      retuen -1;
  }
  5.2.Binary Search - Searching by taking two at a time form both the ends and reducing.(O(1 to logN))
  Note:- The array should be sorted.
   
   binary_search(arr,key,n){
     int l=0,h=arr.length()-1,mid=(h-l)/2;
     while(arr[mid]!=key){
         if(arr[mid]==key){
             cout<<"Key at "<<mid;
             return 0;
         }
         else if(arr[mid]>key){
             h=mid-1;
             mid=(h-l)/2;
         }
         else{
             l=mid+1;
             mid=(h-l)/2;
         }
         return -1;
     }
   }
  */
 /*
 Note:- These are the pre defined functions can directly be used with array operation.
 6. get(index) - Returns the value of stored at this index.
 7. Set(index,new_value) - Replaces the value at 'index' with 'new_value'.
 8. max(val1,val2) -   Returns maximum among val1 & val2.
 9. min(val1,val2) -   Returns minimum among val1 & val2.
 10. accumulate(initial_index, last_index, initial_sum) - Returns the sum within the boundry.
 11. reverse(initial_index,last_index) - It reverses the array.
*/
