/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    
    Node *temp = head;
    Node *prev = NULL;
    int currentPos = 0;
    
    while(currentPos<position){
        prev = temp;
        temp = temp->next;
        currentPos++;
    }
    
    //now the newNode to be inserted between prev and temp
    
    Node * newN = new Node;
    newN->data = data;
    newN->next = temp;
    
    if(prev!=NULL){
        prev->next = newN;
    }else{              //if prev is null then newN is the head
        head = newN;
    }
    
    
    return head;
    
}
