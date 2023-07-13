// Q: https://www.codingninjas.com/studio/problems/special-binary-tree_920502?leftPanelTab=0
bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left && root->right)
        return isSpecialBinaryTree(root->left) && isSpecialBinaryTree(root->right);
    // If node hase only one child
    return false;
}