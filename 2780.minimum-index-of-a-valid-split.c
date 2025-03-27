/*
 * @lc app=leetcode id=2780 lang=c
 *
 * [2780] Minimum Index of a Valid Split
 */

// @lc code=start

int minimumIndex(int* nums, int numsSize) 
{
	int x = nums[0];
	int count = 0;

	// determine majority - Boyer-Moore majority voting algo 
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == x)
			count++;
		else
			count--;
		if (count == 0)
		{
			x = nums[i];
			count = 1;
		}
	}

	// count frequency
	int xCount = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == x)
			xCount++;
	}
	
	// quick error check?
	// for the case where there's no majority, we can end early
	if (xCount * 2 <= numsSize)
		return -1;

	// iterate until finish.
	// test every index and check
	// if there's no more remainder, break the loop, there's no point
	count = 0;
	for (int index = 0; index < numsSize; index++)
	{
		if (x == nums[index])
			count++;
		int remainder = xCount - count;
		if (remainder == 0)
			break;
		if (count * 2 > index + 1 && remainder * 2 > numsSize - index - 1)
			return index;
	}
	return -1;
}
// @lc code=end

