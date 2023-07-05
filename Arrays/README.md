# 1. Set Matrix Zero
## Better Approach
Store the {row,col} in any data structure which contains zero in it.After that simply iterate the ds wherever the row,col found in the ds then mark that ccell to zero.
## Optimal Approach
Insted of using any extra space use first cell of row and col to keep track zero in their particular row and column.
Remember that the first cell [0,0] collide for same row and col twice so use col0 variable for row and take take care of edge cases.
