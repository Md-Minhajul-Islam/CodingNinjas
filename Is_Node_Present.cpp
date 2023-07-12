// Q: https://www.codingninjas.com/studio/problems/code-find-a-node_5682?leftPanelTab=0
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    bool l, r;
    l = isNodePresent(root->left, x);
    if (!l)
        r = isNodePresent(root->right, x);
    return (l || r);
}