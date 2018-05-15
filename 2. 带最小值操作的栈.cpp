class MinStack {
public:
    stack<int> stack1;
    stack<int> stack2;
    MinStack() {
        // do intialization if necessary
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
    void push(int number) {
        // write your code here
        stack1.push(number);
        if(stack2.size()==0)
        {
            stack2.push(number);
            return;
        }
        if(stack2.top()>number)
            stack2.push(number);
        else
            stack2.push(stack2.top());
    }

    /*
     * @return: An integer
     */
    int pop() {
        // write your code here
        stack2.pop();
        int value=stack1.top();
        stack1.pop();
        return value;
    }

    /*
     * @return: An integer
     */
    int min() {
        // write your code here
        return stack2.top();
    }
};