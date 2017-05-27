/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
//here: http://www.geeksforgeeks.org/reverse-a-doubly-linked-list/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    Node * temp = NULL;
    Node* current = head;
    
    
    
    if(current==NULL || current->next == NULL){
        return current;
    }
    
    while(current!=NULL){
        temp = current->prev; //step1: to store this values, since changing in next step
                                //just as we need 'temp' in swapping two variable values
        current->prev = current->next; //step2: first part of swapping
        current->next = temp;       //step3: second part of swapping
        current = current->prev;    //step4: move ahead, now prev contains the original next (what happened in step 2)
    }
    
    //if current is null (since the while loop terminated) ie end node, then the new head is prev of this
    //that is stored in temp
    
    if(temp!=NULL){
        head = temp->prev;
    }
    
    return head;
    
}
