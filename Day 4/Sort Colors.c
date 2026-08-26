void sortColors(int* nums, int n) {
    
    int i = 0, j = 0, k = n - 1, temp;
    while (j <= k) {
        
        if (nums[j] == 0) {
            temp = nums[i];
            nums[i++] = nums[j];
            nums[j++] = temp;
        }
        else if (nums[j] == 2) {
            temp = nums[j];
            nums[j] = nums[k];
            nums[k--] = temp;
        }
        else {
            j++;
        }
    }
}
