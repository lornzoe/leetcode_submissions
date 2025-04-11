/*
 * @lc app=leetcode id=258 lang=c
 *
 * [258] Add Digits
 */

// @lc code=start
int addDigits(int num) {
    if (num % 10 == num)
		return num;

	int result;
	while (num != 0)
	{
		result = 0;
		while (num)
		{
			result += num %10;
			num /= 10;
		}
		if (result < 10)
			return result;
		num = result;
	}
	return result;
}
// @lc code=end

