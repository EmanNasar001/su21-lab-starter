#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */


    if (head == NULL) return 0; 

    node *slow_ptr = head;
    node *fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr) {
            return 1; 
        }
    }

    return 0; 
}


