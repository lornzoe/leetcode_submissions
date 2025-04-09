/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	if (n == 0)
		return;

	int j = n - 1;
	int i = m - 1;

	for (int x = nums1Size - 1; x >= 0; x--)
	{
		if (i >= 0 && j >= 0)
		{
			if (nums1[i] > nums2[j])
				nums1[x] = nums1[i--];
			else
				nums1[x] = nums2[j--];
		}
		else
		{
			if (i >= 0 && j < 0)
				nums1[x] = nums1[i--];
			else
				nums1[x] = nums2[j--];
		}
		
	}
}
// @lc code=end

