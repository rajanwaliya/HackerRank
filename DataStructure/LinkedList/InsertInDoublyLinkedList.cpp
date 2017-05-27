/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
    // Do not write the main method. 
    Node* orgHead = head;
    Node* prev = NULL;
    //find right position for the new node to be inserted
    while(head!=NULL && head->data <= data){
        prev = head;
        head = head->next;
    }
    //now the node should be between prev and head
    //now it is prev <-> head
    // we need to change it to prev <-> newNode <-> head
    Node *newN = new Node;
    newN -> data = data;
    
    //***if prev is NULL that means new node is the head***
    if(prev!=NULL){  //since accessing next of prev, it should not be null
        prev->next = newN;
    }else{
        orgHead = newN;
    }
    newN->prev = prev;
    newN->next = head;
    
    if(head!=NULL){ //since we are accessing prev of head, it should not be null
        head->prev = newN;
    }
    
    return orgHead;
}
