/*
 * @lc app=leetcode id=83 lang=c
 *
 * [83] Remove Duplicates from Sorted List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (!head)
		return NULL;

	struct ListNode *start = head;
	struct ListNode *itr = start;

	head = head->next;

	while (head)
	{
		if (head->val != itr->val)
		{
			itr->next = head;
			itr = itr->next;
		}
		head = head->next;
	}
	
	itr->next = NULL;
	return start;
}
// @lc code=end

