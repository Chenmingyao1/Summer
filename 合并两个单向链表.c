class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* preHead = new ListNode(-1);

        ListNode* prev = preHead;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                prev->next = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
        }

        // 合并后 l1 和 l2 最多只有一个还未被合并完，我们直接将链表末尾指向未合并完的链表即可
        prev->next = l1 == nullptr ? l2 : l1;

        return preHead->next;
    }
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (!l1)
		return l2;
	if (!l2)
		return l1;
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;
	while (l1 && l2){
		if (l1->val < l2->val){
			t->next = l1;
			l1 = l1->next;
		}			
		else{
			t->next = l2;
			l2 = l2->next;
		}			
		t = t->next;		
	}
	if (l1)      t->next = l1;
	else if (l2) t->next = l2;
	return head->next;
}

//方法二：递归。


if (!l1)
		return l2;
	if (!l2)
		return l1;
	if (l1->val < l2->val){
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}
	else{
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}

