/*
 * @lc app=leetcode id=19 lang=c
 *
 * [19] Remove Nth Node From End of List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	int len = 0;
	struct ListNode *iter = head;
	
	while (iter)
	{
		iter = iter->next;
		len++;
	}
	if (len == n)
		return head->next;

	iter = head;
	for (int i = 1; i < len - n; i++)
		iter = iter->next;

	iter->next = iter->next->next;

	return head;
}
// @lc code=end

