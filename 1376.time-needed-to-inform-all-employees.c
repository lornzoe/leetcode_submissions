/*
 * @lc app=leetcode id=1376 lang=c
 *
 * [1376] Time Needed to Inform All Employees
 */

// @lc code=start
int getTime(int i, int *manager, int *informTime)
{
	if (manager[i] == -1)
		return informTime[i];
	informTime[i] += getTime(manager[i], manager, informTime);
	manager[i] = -1;
	return informTime[i];
}

int numOfMinutes(int n, int headID, int* manager, int managerSize, int* informTime, int informTimeSize) 
{
	int highestTime = 0;
	for (int i = 0; i < n; i++)
	{
		if (informTime[i] == 0)
		{
			// having to loop is expensive
			// instead of calculating starting from the head,
			// calculating from the end nodes (informTime[i] == 0) will be faster
			int time = getTime(i, manager, informTime);
			if (time > highestTime)
				highestTime = time;
		}
	}
	return highestTime;
}
// @lc code=end

