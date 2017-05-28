
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    deque<node*> tq;
    tq.push_back(root);
    while(!tq.empty()){
        node* temp = tq.front();
        tq.pop_front();
        
        cout << temp->data << " ";
        if(temp->left!=NULL){
            tq.push_back(temp->left);
        }
        if(temp->right!=NULL){
            tq.push_back(temp->right);
        }
    }
}
