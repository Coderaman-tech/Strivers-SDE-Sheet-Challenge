# 1. Kth Largest Element in an Array
The idea is to construct a max-heap of elements. Since the top element of the max heap is the largest element of the heap, we will remove the top K-1 elements from the heap.  The top element will be Kth's Largest element.

# 2. Top K Frequent Elements
First create map which contains unique element of the array and its count in array then put all key value pair in max heap. After that insert first k element of priority queue in our result.

# 3. Merge k Sorted Arrays
Iterate through all the arrays and push in min heap.And then pop element one by one from the heap and store in our final result array.

# 4.Maximum Sum Combination
You are given two integer arrays a[] and b[] of equal size. A sum combination is formed by adding one element from a[] and one from b[], using each index pair (i, j) at most once. Return the top k maximum sum combinations, sorted in non-increasing order.

Solution- The idea is to use a max heap (priority queue). First, we sort both arrays. We then use a max heap to track the highest sum combinations, starting with the largest sum from A[n-1] + B[n-1]. At each step, we extract the maximum sum and push the next possible sums by incrementing the indices, ensuring that we always get the next largest sum efficiently. A set is used to track visited pairs, preventing duplicate computations. 
