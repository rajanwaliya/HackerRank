/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    
    //in a->b->c->d, deleting b simply means making a->next = c
    int currentPos = 0;
    
    Node *temp = head;
    Node *prev = NULL;
    
    while(currentPos < position){
        prev = temp;
        temp = temp->next;
        currentPos++;
    }
    
    //if position is 0 (delete head)
    //simply return next of head
    if(position == 0){  //or could check using if prev == NULL
        return head->next;
    }
    
    //need to delete temp
    prev->next = temp->next;
   
    // no need to check if temp is NULL, because in question they promised to give valid(existing) position 
   
    return head;
    
    
}
