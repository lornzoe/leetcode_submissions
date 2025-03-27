/*
 * @lc app=leetcode id=2678 lang=c
 *
 * [2678] Number of Senior Citizens
 */

// @lc code=start
int countSeniors(char** details, int detailsSize) 
{
	int count = 0;
    for (int i = 0; i < detailsSize; i++)
	{
		if (((details[i][11] - '0') * 10 + (details[i][12] - '0')) > 60)
			count++;
	}
	return count;
}
// @lc code=end

