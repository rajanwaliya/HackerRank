/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

//http://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

void preOrder(node *root) {
    if(root==NULL){return;}
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
