/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

//http://www.geeksforgeeks.org/write-a-function-to-reverse-the-nodes-of-a-linked-list/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head==NULL){
        return head;
    }
    
    Node *prev  = NULL;
    Node *current = head;
    Node *next = head->next;
    
    
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
        
    return prev;
    
}
