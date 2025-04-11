/*
 * @lc app=leetcode id=268 lang=c
 *
 * [268] Missing Number
 */

// @lc code=start
int missingNumber(int* nums, int numsSize) {
    int result = numsSize;
	for (int i = 0; i < numsSize; i++)
	{
		result ^= i;
		result ^= nums[i];
	}
	return result;
}
// @lc code=end

