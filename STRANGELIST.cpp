/*class Node
{
    public:
    int val;
    Node* next;
    Node* child;
    Node(int val)
    {
        next = child = NULL;
        this->val = val;
    }
};*/

Node* flatten(Node* head)
{
    Node* current = head;
    Node* next;
    Node* child;
    while(current->next != NULL) {
        next = current->next;
        if(current->child == NULL) {
            current = next;
        } else {
            child = flatten(current->child);
            current->child = NULL;
            current->next = child;
            while(current->next != NULL) {
                current = current->next;
            }
            current->next = next;
            current = next;
        }
    }
    if(current->child != NULL) {
        child = flatten(current->child);
        current->child = NULL;
        current->next = child;
    }
    return(head);
}
