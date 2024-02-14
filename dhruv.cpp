/**********************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

***********************/
Node *midPoint(Node *head)
{   
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    Node* slow = head;
    Node* fast = head -> next;
    
    while(fast != NULL && (fast -> next) != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

Node *merge(Node *head1, Node *head2)
{
    //Write your code here
    
    //CHECKING FOR NULL
    if(head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }
    
    Node* h1 = head1;
    Node* h2 = head2;
    Node* fh = NULL;
    Node* ft = NULL;
    
    //ASSIGNING fh AND ft TO THE SMALLEST FIRST ELEMENT
    if((head1->data) < (head2->data))
    {
        fh = h1;
        ft = h1;
        h1 = h1 -> next;
    }
    else
    {
        fh = h2;
        ft = h2;
        h2 = h2 -> next;
    }
    
    //MOVING ft AND h1 AND h2 ACCORDINGLY AND CONTINUING THE LIST
    while(h1 != NULL && h2 != NULL)
    {
        if((h1->data) >= (h2->data))
        {
            ft -> next = h2;
            ft = h2;
            h2 = h2 -> next;
        }
        else if ((h1->data) < (h2->data))
        {
            ft -> next = h1;
            ft = h1;
            h1 = h1 -> next;
        }
    }
    
    //CONNECTING THE REST OF THE LIST
    if( h2 == NULL)
    {
        ft -> next = h1;
    }
    else if( h1 == NULL)
    {
        ft -> next = h2;
    }
    return fh;
}

Node *mergeSort(Node *head)
{
    if( head -> next == NULL){
        return head;
    }
    
    if(head == NULL){
        return head;
    }
    
    Node* mid = midPoint(head);
    Node* h1 = mid -> next;
    
    mid -> next = NULL;
    
    Node* left = mergeSort(head);
    Node* right = mergeSort(h1);
    
    Node* newhead = merge(left,right);
    return newhead;
    
}