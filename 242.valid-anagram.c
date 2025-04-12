/*
 * @lc app=leetcode id=242 lang=c
 *
 * [242] Valid Anagram
 */

// @lc code=start
bool isAnagram(char* s, char* t) {
	int map[26] = { 0 };
	while (*s && *t)
	{
		map[*s - 'a']++;
		map[*t - 'a']--;
		s++;
		t++;
	}
	if (*s || *t)
		return false;
	for (int i = 0; i < 26; i++)
	{
		if (map[i])
			return false;
	}
	return true;
}
// @lc code=end

