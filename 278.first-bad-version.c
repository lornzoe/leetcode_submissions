/*
 * @lc app=leetcode id=278 lang=c
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
	unsigned int first = 1;
	unsigned int last = n;
	while (first < last)
	{
		unsigned int mid = (first + last) / 2;
		if (isBadVersion(mid))
			last = mid;
		else
			first = mid + 1;
	}
	return first;
}
// @lc code=end

