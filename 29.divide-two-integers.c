/*
 * @lc app=leetcode id=29 lang=c
 *
 * [29] Divide Two Integers
 */

// @lc code=start
int divide(int dividend, int divisor) {

	if (dividend == divisor)
		return 1;
	if (dividend == 0)
		return 0;
	if (divisor == 1)
		return dividend;
	if (dividend == INT_MIN && divisor == -1)
		return INT_MAX;

	int pos = (dividend > 0 == divisor > 0);

	unsigned long a = labs(dividend);
	unsigned long b = labs(divisor);
	int quotient = 0;
	
	while (a > 0)
	{
		int x = 0;
		while (a >= (b << x))
			x++;
		if (x == 0)
			break;
		x--;
		a -= b << x;
		quotient += 1 << x;
	}
	return pos ? quotient : -quotient;
}
// @lc code=end

