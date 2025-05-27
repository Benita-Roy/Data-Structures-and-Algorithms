/*Given the root of a binary tree, return the inorder traversal of its nodes' values.*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 

 * Note: The returned array must be malloced, assume caller calls free().
 */

void inorderHelper(struct TreeNode* root, int * arr,int* index)
{
    if(root==NULL) return;
    inorderHelper(root->left,arr,index);
    arr[(*index)++]=root->val;
    inorderHelper(root->right,arr,index);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=(int *)malloc(100*sizeof(int));
    int index=0;
    inorderHelper(root,arr,&index);
    *returnSize=index;
    return arr;
}
