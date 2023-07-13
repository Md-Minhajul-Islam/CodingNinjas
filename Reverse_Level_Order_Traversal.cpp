// Q: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339?leftPanelTab=0
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> v;
    queue<TreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *parent = q.front();
        q.pop();
        v.push_back(parent->val);
        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    int l = 0, r = v.size() - 1;
    while (l < r)
    {
        swap(v[l], v[r]);
        l++, r--;
    }
    return v;
}