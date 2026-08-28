/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    // Put all even numbers first
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            ans[index++] = nums[i];
        }
    }

    // Put all odd numbers after even numbers
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 != 0) {
            ans[index++] = nums[i];
        }
    }

    *returnSize = numsSize;

    return ans;
}
