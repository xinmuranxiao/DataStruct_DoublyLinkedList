#pragma once
typedef struct DoublyLinkedListNode {
	int Data;
	struct DoublyLinkedListNode* Last;
	struct DoublyLinkedListNode* next;
}DLLN;