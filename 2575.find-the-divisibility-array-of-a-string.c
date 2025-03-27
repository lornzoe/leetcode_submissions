/*
 * @lc app=leetcode id=2575 lang=c
 *
 * [2575] Find the Divisibility Array of a String
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* divisibilityArray(char* word, int m, int* returnSize) {
    int size = 0;
	while (word[size] != NULL)
		size++;
	int *div = malloc(sizeof(int) * size);

	unsigned long long calc = 0;
	for (int i = 0; i < size; i++)
	{
		calc *= 10;
		calc += (word[i] - '0');
		calc %= m;
		if (calc)
			div[i] = 0;
		else
			div[i] = 1;
		
	}
	*returnSize = size;
	return div;
}
// @lc code=end

