/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> matrix (n, vector<int>(n));

		int dir = 0;
		// 0 down 
		// 1 right
		// 2 up
		// 3 left 
		int hori = 0;
		int vert = 0;
		int i = 1;
		while(i <= n*n)
		{
			matrix[vert][hori] = i;

			switch(dir)
			{
				case 0:
					if (hori == n - 1 || matrix[vert][hori+1] > 0)
					{
						dir++;
						vert++;
					}
					else
						hori++;
					break;
				case 1:
					if (vert == n - 1 || matrix[vert+1][hori] > 0)
					{
						dir++;
						hori--;
					}
					else
						vert++;
					break;
				case 2:
					if (hori == 0 || matrix[vert][hori-1] > 0)
					{
						dir++;
						vert--;
					}
					else
						hori--;
					break;
				case 3:
					if (vert == 0 || matrix[vert-1][hori] > 0)
					{
						dir = 0;
						hori ++;
					}
					else
					{
						vert--;
					}
					break;
				default:
					break;
			}
			i++;
		}

		return matrix;
	}
};
// @lc code=end

