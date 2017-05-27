/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    
    if(headA == NULL){
        return headB;
    }
    
    if(headB == NULL){
        return headA;
    }
    
    Node *head = NULL;
    if(headA->data < headB->data){
        head = headA;
        headA= headA->next;
    }else{
        head = headB;
        headB = headB->next;
    }
    
    Node* temp = head;
    
    while(headA!=NULL || headB!=NULL){
        
        if(headA==NULL){
            temp->next = headB;
            headB = headB->next;
        }else if(headB == NULL){
            temp->next = headA;
            headA = headA->next;
        }else{
            if(headA->data < headB->data){
                temp->next = headA;
                headA = headA->next;
            }else{
                temp->next = headB;
                headB = headB->next;
            }
        }
        
        temp = temp->next;
    }
    
    return head;
    
}
