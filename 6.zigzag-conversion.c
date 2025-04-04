/*
 * @lc app=leetcode id=6 lang=c
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
char* convert(char* s, int numRows) {
	if (numRows == 1)
		return s;

	int len = strlen(s); 
    char *result = malloc(sizeof(char) * (strlen(s) + 1));
	char *start = result;

	for (int row = 0; row < numRows; row++)
	{
		int i = row;
		while (i < len)
		{
			*result = s[i];
			result++;
			i += (numRows - 1 - (i % (numRows - 1))) * 2;
		}
	}
	start[len] = 0;
	return start;
}
// @lc code=end
