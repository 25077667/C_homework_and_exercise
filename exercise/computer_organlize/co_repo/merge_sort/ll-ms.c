#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

typedef struct ELE {
  char *value;
  struct ELE *next;
} list_ele_t;

typedef struct {
  list_ele_t *head, *tail;
  int size;
} queue_t;

list_ele_t *merge(list_ele_t *list1, list_ele_t *list2) {
  if (!list1)
    return list2;
  if (!list2)
    return list1;

  if (strcmp(list1->value, list2->value) < 0) { // increase
    list1->next = merge(list1->next, list2);
    return list1;
  } else {
    list2->next = merge(list1, list2->next);
    return list2;
  }
}

list_ele_t *mergeSort(list_ele_t *head) {
  if (!head || !head->next)
    return head;

  // spilt into 2 lists, slow will be the half element of list
  list_ele_t *fast = head->next;
  list_ele_t *slow = head;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  fast = slow->next;
  slow->next = NULL;

  list_ele_t *list1 = mergeSort(head);
  list_ele_t *list2 = mergeSort(fast);

  return merge(list1, list2);
}

void q_sort(queue_t *q) {
  if (!q || q->size < 2)
    return;

  q->head = mergeSort(q->head);
  list_ele_t *last = q->head;
  while (last->next) {
    last = last->next;
  }
  q->tail = last;
}

int main() { return 0; }
