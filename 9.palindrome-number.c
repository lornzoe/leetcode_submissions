/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x) {
	unsigned int y = x;
	unsigned int i = 0;

	if (x < 0)
		return false;
	if (x == 0)
		return true;
			
	while (y > 0)
	{
		i = (i * 10) + (y % 10);
		y /= 10;
 	} 
	return (i == x);
}
// @lc code=end

