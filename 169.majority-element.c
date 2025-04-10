/*
 * @lc app=leetcode id=169 lang=c
 *
 * [169] Majority Element
 */

// @lc code=start
int majorityElement(int* nums, int numsSize) {
    int element = nums[0];
	int count = 1;

	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i] == element)
			count++;
		else
		{
			count--;
			if (count != 0)
				continue;
			element = nums[i];
			count = 1;
		}
	}
	return element;
}
// @lc code=end

