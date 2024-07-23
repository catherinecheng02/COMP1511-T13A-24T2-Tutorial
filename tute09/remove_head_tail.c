struct node *remove_head(struct node *head) {
    // If the linked list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // Store the head node in a temporary variable
    struct node *temp = head;
    // Update the head to point to the next node
    head = head->next;
    // Free the memory allocated for the old head node
    free(temp);

    return head;
}
struct node *remove_tail(struct node *head) {
    // If the linked list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // If the linked list has only one node, free the memory
    // allocated for the node and return NULL
    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    // Traverse the linked list to find the second last node
    struct node *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Store the last node in a temporary variable
    struct node *temp = current->next;

    // Update the second last node to point to NULL
    current->next = NULL;

    // Free the memory allocated for the last node
    free(temp);

    return head;
}
