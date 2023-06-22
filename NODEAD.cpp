
/* struct Node {
    int val;
    struct Node* next;
    Node(int x){
        val = x;
        next = NULL;
    }
 };*/
Node* remove(Node* head, int position){
    if(position == 1) return head->next;
    Node* curr = head;
    Node* prev = NULL;
    int num = 1;
    while(num!=position){
        prev = curr;
        curr = curr->next;
        num++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    return head;
}

Node* insert(Node* head, int position, int value){
    int num = 1;
    if(position==1){
        Node* dummy = new Node(value);
        dummy->next = head;
        return dummy;
    }
    Node* curr = head;
    while(num!=position-1){
        num++;
        curr = curr->next;
    }
    Node* dummy = new Node(value);
    Node* flag = curr->next;
    curr->next = dummy;
    dummy->next = flag;
    return head;
}