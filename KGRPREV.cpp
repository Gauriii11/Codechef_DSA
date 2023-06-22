/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/ 


Node* reverseMSizeGroups(Node* head, int M){
    Node* pn = NULL; // previous node
    Node* cn = head; // current node
    Node* nn = head; // next node

    int i = 0;
    while (cn != NULL && i < M) {
        nn = cn->next; // store next node
        cn->next = pn; // reverse the link
        pn = cn;       // update previous node
        cn = nn;       // update current node
        i++;
    }

    if (nn != NULL) {
        // Recursive call to reverse the next group
        head->next = reverseMSizeGroups(nn, M);
    }

    return pn; // new head of the reversed group
}