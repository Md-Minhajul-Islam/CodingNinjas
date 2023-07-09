// Q: https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> s;
    while (!myStack.empty())
    {
        s.push(myStack.top());
        myStack.pop();
    }
    myStack.push(x);
    while (!s.empty())
    {
        myStack.push(s.top());
        s.pop();
    }
    return myStack;
}