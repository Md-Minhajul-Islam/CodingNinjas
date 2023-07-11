// Q: https://www.codingninjas.com/studio/problems/level-order-traversal_796002?leftPanelTab=0
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    queue<BinaryTreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();
        v.push_back(f->val);
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return v;
}