/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node * temp = head;
    
    Node * newN = new Node;
    newN->next=NULL;
    newN->data=data;
    
    if(temp==NULL){ //newNode is the head
        return newN;}
    
    while(temp->next!=NULL){ //to make temp the last node, last node will have next == Null
        temp=temp->next;}
    
    temp->next=newN;
    
    return head; //need to return head only    
}
