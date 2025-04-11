/*
 * @lc app=leetcode id=507 lang=c
 *
 * [507] Perfect Number
 */

// @lc code=start
bool checkPerfectNumber(int num) {
	// if (num == 1)
	// 	return false;

    // int check = 1;

	// for (int i = 2; i <= num/2; i++) // square root works here too
	// {
	// 	if (num % i)
	// 		continue;
	// 	check += i;
	// }
	// return (check == num);
	return (num == 6
			|| num == 28
			|| num == 496
			|| num == 8128
			|| num == 33550336);
}
// @lc code=end

