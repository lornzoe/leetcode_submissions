/*
 * @lc app=leetcode id=23 lang=c
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *newNode(int val)
{
	struct ListNode *newNode = malloc(sizeof(struct ListNode));
	newNode->val = val;
	newNode->next = NULL;
	return newNode; 
}

int compare(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
	if (!listsSize)
		return NULL;

	int count = 0;

	for (int i = 0; i < listsSize; i++)
	{
		if (!lists[i])
			continue;
		struct ListNode *head = lists[i];
		while (head)
		{
			count++;
			head = head->next;
		}
	}

	int *arr = malloc(sizeof(int) * count);
	int pos = 0;

	for (int i = 0; i < listsSize; i++)
	{
		struct ListNode *head = lists[i];
		while (head)
		{
			arr[pos] = head->val;
			pos++;
			head = head->next;
		}
	}
	qsort(arr, count, sizeof(int), compare);
	
	struct ListNode start;
	struct ListNode *ptr = &start;
	for (int i = 0; i < count; i++)
	{
		ptr->next = newNode(arr[i]);
		ptr = ptr->next;
	}
	return start.next;
}
// @lc code=end

