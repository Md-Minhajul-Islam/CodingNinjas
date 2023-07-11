// Q: https://www.codingninjas.com/studio/problems/name_2035933?leftPanelTab=0

vector<int> v;
void postTraverse(TreeNode *root)
{
    if (root == NULL)
        return;
    if (root->left)
        postTraverse(root->left);
    if (root->right)
        postTraverse(root->right);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode *root)
{
    v.clear(); // in this problem tese cases are used. So, beacuse of we took a global
               // vector we have to clear the vector before every test case. otherwise 
              //  previous values will remain in the vector.
    postTraverse(root);
    return v;
}