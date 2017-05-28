/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    if(root==NULL){
        return root;
    }
    
    //if both are smaller than root, then lca in left subtree
    if(v1<root->data && v2<root->data){
        return lca(root->left,v1,v2);
    }
    //if both are greater than root, then lca in right subtree
    if(v1>root->data && v2>root->data){
        return lca(root->right,v1,v2);
    }

    //remaining case v1 < root < v2 since v2>v1 then root is the lca
    return root;
   
}

