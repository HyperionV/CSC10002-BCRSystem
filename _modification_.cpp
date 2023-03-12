#include <_modification_.h>

void addStringNode(stringNode *&head, string data) {
    if (head == nullptr) {
        head = new stringNode;
        head->data = data;
        head->next = nullptr;
        return;
    }
    stringNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    stringNode* curr = new stringNode;
    curr->data = data;
    curr->next = nullptr;
    temp->next = curr;
    temp = curr = nullptr;
}

