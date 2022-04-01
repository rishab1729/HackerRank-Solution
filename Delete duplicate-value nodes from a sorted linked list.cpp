tNode* removeDuplicates(SinglyLinkedListNode* head) {
    if (!head) {
        return head;
    }
    Node* res = head;
    while (head->next) {
        if (head->next->data == head->data) {
            head->next = head->next->next;
        }
        else {
            head = head->next;
        }
    }
    return res;
}
