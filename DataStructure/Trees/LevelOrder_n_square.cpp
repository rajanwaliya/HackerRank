
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

int height(node* root){
    if(root==NULL){return 0;} //here height is different from previous question
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

void printGivenLevel(node * root, int l){
    if(root == NULL){return;}
    if(l==1){
        cout << root->data << " ";
    }else{
        printGivenLevel(root->left,l-1);
        printGivenLevel(root->right,l-1);
    }
}

void LevelOrder(node * root)
{
    int h = height(root);
    for(int i=1;i<=h;i++){
        printGivenLevel(root,i);
    }
}
