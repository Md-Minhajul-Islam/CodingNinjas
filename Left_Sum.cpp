// Q: https://www.codingninjas.com/studio/problems/left-sum_920380?leftPanelTab=0
long long sum;
void Sum(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    if (root->left)
        sum += root->left->data;
    Sum(root->left);
    Sum(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
    sum = 0; // In this problem, multiple test cases are used. So, because of we took a global
             // variable we have to assign 0 to the variable before every test case. Otherwise
             //  previous value will remain in the variable.
    Sum(root);
    return sum;
}