class MyQueue {
public:
    stack<int> stack1;
    stack<int> stack2;
    MyQueue() {
        // do intialization if necessary
    }

    /*
     * @param element: An integer
     * @return: nothing
     */
    void push(int element) {
        // write your code here
        stack1.push(element);
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code heref
        if(stack2.size()!=0)
        {
            int result=stack2.top();
            stack2.pop();
            return result;
        }
        while(stack1.size())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        int result=stack2.top();
        stack2.pop();
        return result;
    }

    /*
     * @return: An integer
     */
    int top() {
        // write your code here
        stack1.top();
        if(stack2.size()!=0)
        {
            return stack2.top();
        }
         while(stack1.size())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
        return stack2.top();
    }
};