/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void leftT(node *root){
    if(root==NULL){return;}
    leftT(root->left);
    cout << root->data  << " ";
}

void rightT(node *root){
    if(root==NULL || root->right==NULL){return;}
    cout << root->right->data  << " ";
    rightT(root->right);
    
}

void top_view(node * root)
{
    leftT(root);
    rightT(root);
}
