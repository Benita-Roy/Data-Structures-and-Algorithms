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

void postorderHelper(struct TreeNode* root,int* arr,int* index)
{
    if(root==NULL)return;
    postorderHelper(root->left,arr,index);
    postorderHelper(root->right,arr,index);
    arr[(*index)++]=root->val;

}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int *arr=(int *)malloc(100*sizeof(int));
    int index=0;
    postorderHelper(root,arr,&index);
    *returnSize=index;
    return arr;
}