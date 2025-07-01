# 1. Find Nth root of a number
The primary objective of the Binary Search algorithm is to efficiently determine the appropriate half to eliminate, thereby reducing the search space by half. It does this by determining a specific condition that ensures that the target is not present in that half.
Now, we are not given any sorted array on which we can apply binary search. But, if we observe closely, we can notice that our answer space i.e. [1, n] is sorted. So, we will apply binary search on the answer space.If mid is less than our target number go to right side and if greater go to left side else or mid element is our answer.

# 2.Single Element in a Sorted Array
So firstly we have to play with odd and even length.If any one element appers once and other twice then total length is definitely be odd.So if our mid element is odd and nums[mid]==nums[mid-1] then definitely we have to move right side and if mid is even and nums[mid]==nums[mid+1] then we have also move to the right otherwise left part.If nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1] then return mid which is our single element. Also take care of edge case in case of single element and if mid is first or last element of the array.

# 3. Search Element in a Rotated Sorted Array
The steps are as follows:

    Place the 2 pointers i.e. low and high: Initially, we will place the pointers like this: low will point to the first index, and high will point to the last index.
    Calculate the ‘mid’: Now, inside a loop, we will calculate the value of ‘mid’ using the following formula:
    mid = (low+high) // 2 ( ‘//’ refers to integer division)
    Check if arr[mid] == target: If it is, return the index mid.
    Identify the sorted half, check where the target is located, and then eliminate one half accordingly:
    If arr[low] <= arr[mid]: This condition ensures that the left part is sorted.
    If arr[low] <= target && target <= arr[mid]: It signifies that the target is in this sorted half. So, we will eliminate the right half (high = mid-1).
    Otherwise, the target does not exist in the sorted half. So, we will eliminate this left half by doing low = mid+1.
    Otherwise, if the right half is sorted:
    If arr[mid] <= target && target <= arr[high]: It signifies that the target is in this sorted right half. So, we will eliminate the left half (low = mid+1).
    Otherwise, the target does not exist in this sorted half. So, we will eliminate this right half by doing high = mid-1.
    Once, the ‘mid’ points to the target, the index will be returned.
    This process will be inside a loop and the loop will continue until low crosses high. If no index is found, we will return -1.
# 4.  Median of Two Sorted Arrays
I recomment please watch this video - https://www.youtube.com/watch?v=F9c7LpRZWVQ
Steps are -

    First, we have to make sure that the arr1[] is the smaller array. If not by default, we will just swap the arrays. Our main goal is to consider the smaller array as arr1[].
    Calculate the length of the left half: left = (n1+n2+1) / 2.
    Place the 2 pointers i.e. low and high: Initially, we will place the pointers. The pointer low will point to 0 and the high will point to n1(i.e. The size of arr1[]).
    Calculate the ‘mid1’ i.e. x and ‘mid2’ i.e. left-x: Now, inside the loop, we will calculate the value of ‘mid1’ using the following formula:
    mid1 = (low+high) // 2 ( ‘//’ refers to integer division)
    mid2 = left-mid1
    Calculate l1, l2, r1, and r2: Generally,
    l1 = arr1[mid1-1]
    l2 = arr2[mid2-1]
    r1 = arr1[mid1]
    r2 = arr2[mid2]
    The possible values of ‘mid1’ and ‘mid2’ might be 0 and n1 and n2 respectively. So, to handle these cases, we need to store some default values for these four variables. The default value for l1 and l2 will be INT_MIN and for r1 and r2, it will be INT_MAX.
    Eliminate the halves based on the following conditions:
    If l1 <= r2 && l2 <= r1: We have found the answer.
    If (n1+n2) is odd: Return the median = max(l1, l2).
    Otherwise: Return median = (max(l1, l2)+min(r1, r2)) / 2.0
    If l1 > r2: This implies that we have considered more elements from arr1[] than necessary. So, we have to take less elements from arr1[] and more from arr2[]. In such a scenario, we should try smaller values of x. To achieve this, we will eliminate the right half (high = mid1-1).
    If l2 > r1: This implies that we have considered more elements from arr2[] than necessary. So, we have to take less elements from arr2[] and more from arr1[]. In such a scenario, we should try bigger values of x. To achieve this, we will eliminate the left half (low = mid1+1).
    Finally, outside the loop, we will include a dummy return statement just to avoid warnings or errors.
