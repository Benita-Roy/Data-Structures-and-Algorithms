//LEETCODE Question:144 Difficulty:Easy
/*Given the root of a binary tree, return the preorder traversal of its nodes' values.*/
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
