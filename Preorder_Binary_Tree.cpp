// Q: https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948?leftPanelTab=0

void preOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    if (root->left)
        preOrder(root->left);
    if (root->right)
        preOrder(root->right);
}