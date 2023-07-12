// Q: https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519?leftPanelTab=0
vector<int> getLeftView(TreeNode<int> *root)
{
    bool freqArray[3005] = {true};
    vector<int> v;
    queue<pair<TreeNode<int> *, int>> q;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();
        TreeNode<int> *node = parent.first;
        int level = parent.second;

        if (!freqArray[level])
        {
            v.push_back(node->data);
            freqArray[level] = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return v;
}