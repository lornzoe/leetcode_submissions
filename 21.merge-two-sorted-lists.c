/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
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

	if (!list1 && !list2)
		return NULL;

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
// @lc code=end

