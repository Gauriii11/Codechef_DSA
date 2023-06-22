/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head){
    
   Node* slow=head;
   Node* fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return slow->val;
    
}
