// Q: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTab=0
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = noOfLeafNodes(root->left);
    int r = noOfLeafNodes(root->right);
    return l + r;
}