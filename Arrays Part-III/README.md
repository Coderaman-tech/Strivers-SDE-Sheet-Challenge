# 1. Search a 2D Matrix
The pattern of the matrix is like a sorted array and to finding a target is easily done by binary search.To finding the element is in which row and col done by matrix[mid/n][mid%n] .It helps to retrieve the element at particular place as like in array.

# 2. Pow(x, n)
i) If n is even then only multiply x of it half times of n by recursion or iterative after that sqaure the result.This is because the power of n/2 is same as n/2 so find power of n/2 only.
ii) If n is odd then multiply x by (n-1)/2 times and at the end multiply ans*x.If n is odd then (n-1) is always even so find its answer and 1 power is remaining so multiply it with answer.
If n is negative do it like 1/pow(x,(-1*n))
