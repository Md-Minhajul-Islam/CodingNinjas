// Q: https://www.codingninjas.com/studio/problems/tree-height_4609628?leftPanelTab=0
int depth(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return max(l, r) + 1;
}
int maxDepth(TreeNode<int> *root)
{
    int maxdepth = depth(root);
    return maxdepth - 1;
}