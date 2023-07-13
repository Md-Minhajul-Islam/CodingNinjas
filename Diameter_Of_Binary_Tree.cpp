// Q: https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552?leftPanelTab=0
int diameter;
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    if (diameter < l + r)
        diameter = l + r;
    return max(l, r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    diameter = 0;
    if (root)
        maxHeight(root);
    return diameter;
}