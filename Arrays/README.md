# 1. Set Matrix Zero
## Better Approach
Store the {row,col} in any data structure which contains zero in it.After that simply iterate the ds wherever the row,col found in the ds then mark that ccell to zero.
## Optimal Approach
Insted of using any extra space use first cell of row and col to keep track zero in their particular row and column.
Remember that the first cell [0,0] collide for same row and col twice so use col0 variable for row and take take care of edge cases.

# 2. Pascal's Triangle
Do brute force approach by understanding the pattern.

# 3. Next Permutation
## Approach 1
It is done by next_permutaion() STL library
## Approach 2
If we carefully see the pattern of all permutaion then we find that there is break point according to which array is changed.First part remains the same and the break point should be swapped with next greater element then reverse the right half array reverse(arr.begin()+idx+1,arr.end()).
we can also notice that all the permutations contain an index i(between the first and second last index) such that its right part is sorted in decreasing order. Now, if we look at the array in the backward direction, it is sorted in increasing order up to index i (from n-1 to index i+1).
We can call this index i as the break-point of the array. The left half of index i (the length of the left half might be 0) in the current permutation is the same as in the previous permutation. And the right half of the break-point is always in decreasing order.

If idx=-1 meand there is no any break point found then we reach that last permutation then reverse the array end return.

# 4. Maximum Subarray Sum
The intuition of the algorithm is not to consider the subarray as a part of the answer if its sum is less than 0. A subarray with a sum less than 0 will always reduce our answer and so this type of subarray cannot be a part of the subarray with maximum sum.

Here, we will iterate the given array with a single loop and while iterating we will add the elements in a sum variable. Now, if at any point the sum becomes less than 0, we will set the sum as 0 as we are not going to consider any subarray with a negative sum. Among all the sums calculated, we will consider the maximum one.

Thus we can solve this problem with a single loop.

# 5. Sort an array of 0s, 1s and 2s
This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

arr[0….low-1] contains 0. [Extreme left part]

arr[low….mid-1] contains 1.

arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array

# 6.Best Time to Buy and Sell Stock
We can maintain a minimum from the start of the array and compare it with every element of the array, if it is greater than the minimum then take the difference and maintain it in max, otherwise update the minimum.
