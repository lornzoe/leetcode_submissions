/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 0)
		return numsSize;

	int newSize = 1;

	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] != nums[newSize - 1])
			nums[newSize++] = nums[i];
	}
	return newSize;
}
// @lc code=end

