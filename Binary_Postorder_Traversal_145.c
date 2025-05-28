/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorderHelper(struct TreeNode* root,int* arr,int* index)
{
    if(root==NULL) return;
    arr[(*index)++]=root->val;
    preorderHelper(root->left,arr,index);
    preorderHelper(root->right,arr,index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int index=0;
    int *arr=(int *)malloc(100*sizeof(int));
    preorderHelper(root,arr,&index);
    *returnSize=index;
    return arr;
}