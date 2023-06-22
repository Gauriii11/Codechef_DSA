/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

Node* reverseSegment(Node* head, int L, int R){
    Node *left = NULL, *left_prev = NULL;
    Node *right = NULL, *right_next = NULL, * curr = head;
    int i = 1;
    
    while(curr && i<=R){
        if(i<L) left_prev = curr;
        if(i==L) left = curr;
        if(i==R){
            right = curr;
            right_next = curr->next;
        }
        curr = curr->next;
        i++;
    }
    right->next = NULL;
    right = reverse(left);
    if(left_prev) left_prev->next = right;
    else head = right;
    left->next = right_next;
    return head;
}
