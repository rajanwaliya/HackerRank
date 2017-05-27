/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/


//Idea: get positionFromHead
// alrady have from tail
//only if I knew total size, I could find positionFromHead
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    
    int size = 0;
    Node *temp = head; //since can't take head itself to the end, will need to travel again
    while(temp!=NULL){
        size++;
        temp = temp->next;
    }
    
    int posFromHead = size - positionFromTail - 1;
    
    int curPos = 0;
    while(curPos<posFromHead){
        curPos++;
        head = head->next;
    }
    
    return head->data ;
    
}
