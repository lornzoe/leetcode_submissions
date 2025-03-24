/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *first = malloc(sizeof(struct ListNode));
	struct ListNode *itr = first;
	first->next = NULL;

	int carry = 0;

	while (l1 != NULL || l2 != NULL || carry)
	{
		itr->val = carry;
		if (l1 != NULL)
			itr->val += l1->val;
		if (l2 != NULL)
			itr->val += l2->val;

		carry = itr->val / 10;
		itr->val = itr->val % 10;

		// if else works here too, but tern. operators seem to boost runtime % scores
		if (l1 != NULL)
			l1 = (l1->next != NULL) ? l1->next : NULL;
		if (l2 != NULL)
			l2 = (l2->next != NULL) ? l2->next : NULL;
			
		if (l1 != NULL || l2 != NULL || carry)
		{
			itr->next = malloc(sizeof(struct ListNode));
			itr = itr->next;
			itr->next = NULL;
		}
	}
	return first;
}
// @lc code=end

