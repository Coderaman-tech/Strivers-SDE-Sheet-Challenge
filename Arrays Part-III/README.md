# 1. Search a 2D Matrix
The pattern of the matrix is like a sorted array and to finding a target is easily done by binary search.To finding the element is in which row and col done by matrix[mid/n][mid%n] .It helps to retrieve the element at particular place as like in array.

# 2. Pow(x, n)
i) If n is even then only multiply x of it half times of n by recursion or iterative after that sqaure the result.This is because the power of n/2 is same as n/2 so find power of n/2 only.
ii) If n is odd then multiply x by (n-1)/2 times and at the end multiply ans*x.If n is odd then (n-1) is always even so find its answer and 1 power is remaining so multiply it with answer.

If n is negative do it like 1/pow(x,(-1*n))

# 3. Majority Element (>n/2 times)
If the array contains a majority element, its occurrence must be greater than the floor(N/2). Now, we can say that the count of minority elements and majority elements is equal up to a certain point in the array. So when we traverse through the array we try to keep track of the count of elements and the element itself for which we are tracking the count. 

After traversing the whole array, we will check the element stored in the variable. If the question states that the array must contain a majority element, the stored element will be that one but if the question does not state so, then we need to check if the stored element is the majority element or not. If not, then the array does not contain any majority element.

# 4. Majority Element (n/3 times)
It is same as previous question but it is confirmed that maximum two number possible whose count is >n/3. And for that two counter is used to track the element. See solution it is better to understand.
