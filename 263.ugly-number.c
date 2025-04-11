/*
 * @lc app=leetcode id=263 lang=c
 *
 * [263] Ugly Number
 */

// @lc code=start
bool isUgly(int n) {
    if (n <= 0)
		return false;
	if (n <= 6)
		return true;
	while (n % 2 == 0)
		n >>= 1;
	while (n % 3 == 0)
		n /= 3;
	while (n % 5 == 0)
		n /= 5;
	return n == 1;
}
// @lc code=end

