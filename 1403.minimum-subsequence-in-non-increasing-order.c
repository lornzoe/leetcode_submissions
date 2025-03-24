/*
 * @lc app=leetcode id=1403 lang=c
 *
 * [1403] Minimum Subsequence in Non-Increasing Order
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b)
{
	return (-(*(int*)a - *(int*)b));
}

int* minSubsequence(int* nums, int numsSize, int* returnSize) {
    int i = 0;
	int mainTotal = 0;

	while (i < numsSize)
		mainTotal += nums[i++];

	qsort(nums, numsSize, sizeof(int), compare);
	
	int returnTotal = 0;
	i = 0;

	while (returnTotal <= mainTotal)
	{
		returnTotal += nums[i];
		mainTotal -= nums[i];
		i++;
	}
	*returnSize = i;
	return nums;
}
// @lc code=end

