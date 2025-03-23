/*
 * @lc app=leetcode id=7 lang=c
 *
 * [7] Reverse Integer
 */

// @lc code=start
int reverse(int x){
	int neg;
	int result;

	if (x == INT_MIN)
		return 0;

	neg = 1;
	result = 0;

	if (x < 0)
	{
		x *= -1;
		neg = -1;
	}

	while (x > 0)
	{
		if (result > INT_MAX / 10)
			return 0;
		result = (result * 10) + (x % 10);
		x = x / 10;
	}
	return (result * neg);
}
// @lc code=end

