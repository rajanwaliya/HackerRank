/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head==NULL){
        return;
    }
    
    //to print in given order
    //print current node before calling for its children
    //cout << head->data << endl;
    
    ReversePrint(head->next);
    
    //to print in reverse order
    //first call for children, when done then print self
    cout << head->data << endl;
    
}
