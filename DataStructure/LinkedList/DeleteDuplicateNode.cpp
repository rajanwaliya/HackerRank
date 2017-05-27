/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *temp = head;
    while(temp!=NULL){
        
        while(temp->next!=NULL && temp->next->data == temp->data){
                temp->next = temp->next->next;
        }
        
        temp = temp->next;
    }
    
    return head;
}

