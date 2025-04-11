/*
 * @lc app=leetcode id=24 lang=c
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void pairSwap(struct ListNode *a, struct ListNode *b, struct ListNode *bef, struct ListNode *aft)
{
	a->next = aft;
	b->next = a;
	if (bef)
		bef->next = b;
}

struct ListNode* swapPairs(struct ListNode* head) {
	if (!head)
		return NULL;

    struct ListNode* first = head;
	struct ListNode* second = NULL;
	struct ListNode* bef = NULL;

	if (head->next)
		second = head->next;
	while (first && second)
	{
		if (first == head)
		{
			pairSwap(first, second, NULL, second->next);
			head = second;
		}
		else
			pairSwap(first, second, bef, second->next);
		bef = first;
		first = first->next;
		if (first)
			second = first->next;
		else
			second = NULL;
	}
	return head;
}
// @lc code=end

