// Q: https://www.codingninjas.com/studio/problems/inorder-traversal_3839605?leftPanelTab=0

vector<int> v;
void inorderTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left)
        inorderTraverse(root->left);
    v.push_back(root->data);
    if (root->right)
        inorderTraverse(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear(); // in this problem test cases are used. So, because of we took a global
               // vector we have to clear the vector before every test case. otherwise
               //  previous values will remain in the vector.
    inorderTraverse(root);
    return v;
}