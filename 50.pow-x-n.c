/*
 * @lc app=leetcode id=50 lang=c
 *
 * [50] Pow(x, n)
 */

// @lc code=start

double power(double x, unsigned int n)
{
    if (n == 0)
		return 1;
	double i = power(x, n/2);
	if (n % 2 == 0)
		return i * i;
	return i * i * x;
}
double myPow(double x, int n) {
	if (n == 0)
		return 1;
	if (n == 1 || x == 1)
		return x;
	if (n == INT_MIN)
	{
		n = n / 2;
		x = x * x;
	}
	if (n > 0)
		return power(x, n);
}
// @lc code=end

