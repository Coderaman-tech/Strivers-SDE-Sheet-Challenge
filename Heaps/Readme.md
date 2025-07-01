# 1. Kth Largest Element in an Array
The idea is to construct a max-heap of elements. Since the top element of the max heap is the largest element of the heap, we will remove the top K-1 elements from the heap.  The top element will be Kth's Largest element.

# 2. Top K Frequent Elements
First create map which contains unique element of the array and its count in array then put all key value pair in max heap. After that insert first k element of priority queue in our result.

# 3. Merge k Sorted Arrays
Iterate through all the arrays and push in min heap.And then pop element one by one from the heap and store in our final result array.
