/*
 * @lc app=leetcode id=69 lang=c
 *
 * [69] Sqrt(x)
 */

// @lc code=start
int mySqrt(int x) {
    if (x == 0 || x == 1)
		return x;
	unsigned int i = 2;
	while (i * i <= x)
		i++;
	return i - 1;
}
// @lc code=end

