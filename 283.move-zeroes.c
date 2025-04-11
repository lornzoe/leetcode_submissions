/*
 * @lc app=leetcode id=283 lang=c
 *
 * [283] Move Zeroes
 */

// @lc code=start
void moveZeroes(int* nums, int numsSize) {
	
	int zero = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (i != zero && nums[i] != 0 && !nums[zero])
		{
			nums[zero++] = nums[i];
			nums[i] = 0;
		}
		if (nums[i] != 0)
			zero++;
	}
}
// @lc code=end

