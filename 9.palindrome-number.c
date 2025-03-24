/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
bool isPalindrome(int x) {
	int i = 0;

	if (x < 0)
		return false;
	if (x == 0)
		return true;
	if (x % 10 == 0)
		return false;
			
	while (x > i)
	{
		i = (i * 10) + (x % 10);
		x /= 10;
 	} 
	return (x == i || x == (i / 10));
}
// @lc code=end

