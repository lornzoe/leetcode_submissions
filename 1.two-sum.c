/*
 * @lc app=leetcode id=1 lang=c
 *
 * [1] Two Sum
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int size = 0;
    int size2;
    int combination;

    while (size < numsSize)
    {
        size2 = size + 1;
        while (size2 < numsSize)
        {
            if (nums[size] + nums[size2] == target)
            {
                int *solution = malloc(sizeof(int) * 2);
                if (!solution)
                {
                    returnSize = 0;
                    return (int*) NULL;
                }
                solution[0] = size;
                solution[1] = size2;
                *returnSize = 2;
                return solution;
            }
            size2++;
        } 
        size++;
    }
    returnSize = 0;
    return (int*)NULL;
}
// @lc code=end

