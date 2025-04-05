/*
 * @lc app=leetcode id=28 lang=c
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
int strStr(char* haystack, char* needle) {
    for (int i = 0; haystack[i]; i++)
	{
		if (haystack[i] != needle[0])
			continue;

		int j = 0;
		while (needle[j] && haystack[i + j])
		{
			j++;
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return i;
	}
	return -1;
}
// @lc code=end

