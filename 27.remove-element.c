/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
		if (numsSize == 0)
		return numsSize;

	int newSize = 0;

	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] != val)
			nums[newSize++] = nums[i];
	}
	return newSize;
}
// @lc code=end

