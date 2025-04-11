/*
 * @lc app=leetcode id=171 lang=c
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
int titleToNumber(char* columnTitle) {
    // base 26 to base 10, then +1
	int result = 0;
	while (*columnTitle)
	{
		result *= 26;
		result += (*columnTitle - 'A' + 1);
		columnTitle++;
	}
	return result;
}
// @lc code=end

