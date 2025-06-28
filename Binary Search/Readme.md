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
