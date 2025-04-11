/*
 * @lc app=leetcode id=509 lang=c
 *
 * [509] Fibonacci Number
 */

// @lc code=start


int fib(int n){

	if (n < 2)
		return n;
	int a = 0;
	int b = 1;
	int c;
	for (int i = 1; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
// @lc code=end

