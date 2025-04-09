/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int carryover = 1;
	for (int i = digitsSize - 1; i >= 0; i--)
	{
		if (!carryover)
			break;
		if (digits[i] + 1 == 10)
		{
			digits[i] = 0;
			carryover = 1;
		}
		else
		{
			digits[i] += 1;
			carryover = 0;
		}
	}
	if (!carryover)
	{
		*returnSize = digitsSize;
		return digits;
	}
	*returnSize = digitsSize + 1;
	int *newDigits = malloc(sizeof(int) * (digitsSize + 1));
	newDigits[0] = carryover;
	for (int i = 1; i < digitsSize + 1; i++)
		newDigits[i] = digits[i - 1];
	return newDigits;
}
// @lc code=end

