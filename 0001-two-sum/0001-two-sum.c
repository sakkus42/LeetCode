/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int k = 0;
    int *res = malloc(sizeof(int) * 2);

    while (i < numsSize)
    {
        k = i + 1;
        while (k < numsSize)
        {
            if (nums[i] + nums[k] == target)
            {
                *returnSize = 2;
                res[0] = i;
                res[1] = k;
                return (res);
            }
            k++;
        }
        i++;
    }
    *returnSize = 0;
    free(res);
    return (0);
}