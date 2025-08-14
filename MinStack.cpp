#include <iostream>
#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> mainStack;
    stack<int> minStack;

public:
    // Push an element onto the stack
    void push(int val) {
        mainStack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        } else {
            minStack.push(minStack.top()); // Push the current min again
        }
    }

    // Pop the top element from the stack
    void pop() {
        if (!mainStack.empty()) {
            mainStack.pop();
            minStack.pop();
        } else {
            cout << "Stack is empty!" << endl;
        }
    }

    // Get the top element
    int top() {
        if (!mainStack.empty()) {
            return mainStack.top();
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // or throw exception
        }
    }

    // Get the minimum element
    int getMin() {
        if (!minStack.empty()) {
            return minStack.top();
        } else {
            cout << "Stack is empty!" << endl;
            return -1; // or throw exception
        }
    }

    // Check if stack is empty
    bool empty() {
        return mainStack.empty();
    }
};

// Test the MinStack
int main() {
    MinStack s;
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);
    s.push(3);

    cout << "Current min: " << s.getMin() << endl; // Should be 1
    s.pop(); // Pop 3
    cout << "Top element: " << s.top() << endl;    // Should be 1
    s.pop(); // Pop 1
    cout << "Current min: " << s.getMin() << endl; // Should be 2
    s.pop(); // Pop 8
    cout << "Top element: " << s.top() << endl;    // Should be 2
    cout << "Current min: " << s.getMin() << endl; // Should be 2

    return 0;
}
