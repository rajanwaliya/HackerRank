/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

//here, the implemented method in O(m+n): http://www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

int getSize(Node *head){
    int ans = 0;
    while(head!=NULL){
        ans++;
        head = head->next;
    }
    return ans;
}

int findIntersect(int d, Node *a, Node *b){
    //list a is the longer one
    for(int i=0;i<d;i++){
        a = a->next;
    }
    
    while(a!=NULL){
        if(a == b){ // note that we are comparing the nodes and not the data, since data could be same before merge point
            return a->data;
        }
        //else
        a = a->next;
        b = b->next;
    }
    
    return -1;
}

int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int c1 = getSize(headA);
    int c2 = getSize(headB);
    
    if(c1>c2){
        return findIntersect(c1-c2,headA,headB);
    }else{
        return findIntersect(c2-c1,headB,headA);
    }
    
}
