int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int i, j, temp;
    // Square every element
    
    for (i = 0; i < numsSize; i++) {
        nums[i] = nums[i] * nums[i];
    }
    
    // Sort the squared values
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    *returnSize = numsSize;
    return nums;
}
