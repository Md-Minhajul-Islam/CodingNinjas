// Q: https://www.codingninjas.com/studio/problems/node-level_920383?leftPanelTab=0
int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    queue<pair<TreeNode<int> *, int>> q;
    if (root)
        q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        TreeNode<int> *node = parent.first;
        int level = parent.second;
        q.pop();

        if (node->val == searchedValue)
            return level;

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    return 0;
}