# 14 Patterns Coding Interview Question : 
I mention the top 14 patterns that can be used to solve any coding interview question . The pattern are as follows;
</br>
<br>

* 1.Sliding Window
* 2.Two Pointers or Iterators
* 3.Fast and Slow pointers
* 4.Merge Intervals
* 5.Cyclic sort
* 6.In-place reversal of linked list
* 7.Tree BFS
* 8.Tree DFS
* 9.Two heaps
* 10. Subsets
* 11.Modified Binary Search
* 12.Top K elements
* 13.K-way Merge
* 14.Topological sort

</br>
<br>


# Sorting-Algorithms
In this Repo have Sorting Algorithms Bubble sort, Insertion Sort, Selection Sort, MergeSort, Quick Sort, Heap Sort etc
<br>
<br>
# Bubble Sort
* 1. Bubble sort is the simplest sorting algorithm that compares two adjacent elements in an array and swaps the largest of the two values to  the end.
    *  2. The worst case time complexity of bubble sort is O(n2): this is because for each iteration n-1 comparisons will be done.
    *  3. The best case  time complexity will be O(n): this is when the list is already sorte
    *  4. The space time complexity will be O(1): since only one memory space is required for the temp variable.

<br>
<br>
# Selection Sort

* 1. Selection sort is the simplest sorting algorithm. It finds the smallest element in the array and swaps it with the first position in the array. Then the second smallest and swaps it with the second position etc.
      *  2. Worst Case Time Complexity : O(n2)
      *  3. Best Case Time Complexity : O(n2)
      *  4. Average Time Complexity : O(n2)
      *  5. Space Complexity : O(1)
      *  This makes it inefficient to operate on larger datasets.
        
 <br>
 <br>
 # Insertion Sort
 
      Insertion sort compares the current element with the element on the left.
      If it is found to be smaller it is swapped with the element on the left.
      Worst Case Time Complexity : O(n2)
      Best Case Time Complexity : O(n)
      Average Time Complexity : O(n2)
      Space Complexity : O(1)
      This makes it inefficient to operate on larger datasets.
<br>
<br>
# Merge Sort

* Merge sort uses divide & conquer method by splitting the array into smaller parts until there is only one element.
   *   The elements are then compared and sorted and merged.
   *   Split the arr into half by finding the median.
   *   Call mergeSort on the first half and mergeSort on the second half. Then merge the two halves.
   *   The time complexity of merge sort is always O(n log n): in all 3 cases (worst, average and best) as merge sort
   *   always divides the array in two halves and take linear time to merge two halves.
<br>
<br>
# Quick Sort 

Given an integer array, sort it in ascending order using quicksort.
     
      Runtime Complexity - Linearithmic, O(nlogn).
      Memory Complexity - Logarithmic, O(logn).
      Note: Recursive solution has O(logn) memory complexity as it will consume memory on the stack.
   
     
      Step 1: Select a pivot element from the array, usually the first element
      Step 2: Compare the pivot element with the current element. If the current element is less than the pivot,
              shift the current element to the left side and if it is greater than the pivot, shift it to the right
              side of the pivot.
      Step 3: Recursively sort the sublists on the right and left sides of the pivot


        
