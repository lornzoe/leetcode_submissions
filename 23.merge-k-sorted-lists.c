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
 struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

	// if (!list1 && !list2)
	// 	return NULL;

	struct ListNode start;
	struct ListNode *itr = &start;

	while (list1 && list2)
	{
		if (list1->val < list2->val)
		{
			itr->next = list1;
			list1 = list1->next;
		}
		else
		{
			itr->next = list2;
			list2 = list2->next;
		}
		itr = itr->next;
	}

	itr->next = list1 ? list1 : list2;

	return start.next;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
	if (!listsSize)
		return NULL;

	for (int i = 1; i < listsSize; i++)
	{
		if (!lists[i])
			continue;
		lists[0] = mergeTwoLists(lists[0], lists[i]);
	}
	return lists[0];
}
// @lc code=end

