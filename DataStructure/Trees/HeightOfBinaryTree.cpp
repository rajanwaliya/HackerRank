
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root==NULL){return -1;}
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh,rh)+1;
    }
  