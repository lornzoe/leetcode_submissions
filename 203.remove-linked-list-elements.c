/*
 * @lc app=leetcode id=203 lang=c
 *
 * [203] Remove Linked List Elements
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
	
	while (head && head->val == val)
		head = head->next;

	if (head == NULL)
		return NULL;

	struct ListNode *itr = head;

	while (itr->next)
	{
		while (itr->next && itr->next->val == val)
			itr->next = itr->next->next;
		if (itr->next)
			itr = itr->next;
	}
	return head;
}
// @lc code=end

