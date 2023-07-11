# 1. Rotate Image
By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix, so that’s why we transpose the matrix and then reverse each row, and since we are making changes in the matrix itself space complexity gets reduced to O(1).

# 2. Merge Intervals
Simply take two variable start and end and change accordingly.

# 3.Merge Sorted Array
Simply from zero start putting the other araay value then sort.
For alter sol. refer [https://takeuforward.org/data-structure/merge-two-sorted-arrays-without-extra-space/]

# 4. Find the Duplicate Number
Use tortoise method to find the duplicate by if duplicate is present in the array it definetly form a cycle.

# 5. Missing and repeating numbers
i) By using XOR operation with all number in the array and the number from 1 to N the result we found is the xor of missing and reapeating number.

ii) This number is generated due to two different no. and by finding this two number we have to check rightmost position where the bit is change means setbit(1).Find this position by bit manipulation.

iii) After finding this position differentiate and xor all the numbers and got two numbers by two group number either in member of 1 or 0. But we can't say which is our missing or repeating.

iv) And for this simply interate in array and increase counter for zero variable if it is equal to 2 then it is repeating or not then missing.


