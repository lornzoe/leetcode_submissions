/*
 * @lc app=leetcode id=8 lang=c
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
int myAtoi(char* s) {
	long result = 0;
	int positive = 1;
	
    while (s && isspace(*s))
		s++;
	if (s && (*s == '+' || *s == '-'))
	{
		if (*s == '-')
			positive = -1;
		s++;
	}
	while (s && isdigit(*s))
	{
		result *= 10;
		result += (*s - '0');
		if (result > INT_MAX)
		{
			if (positive == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		s++;
	}
	return result * positive;
}
// @lc code=end

