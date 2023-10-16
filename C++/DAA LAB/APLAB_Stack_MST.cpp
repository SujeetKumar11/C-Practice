#include <iostream>
#include <stack>
#include <list>
using namespace std;
template <typename T>
class MiddleStack {
private:
    stack<T> dataStack;
    list<T> middleList;

public:
    void push(const T& value) {
        dataStack.push(value);

        if (middleList.empty() || value <= middleList.front()) {
            middleList.push_front(value);
        }
    }

    void pop() {
        if (dataStack.empty()) {
        cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }

        T topValue = dataStack.top();
        dataStack.pop();

        if (topValue == middleList.front()) {
            middleList.pop_front();
        }
    }

    T getMiddle() {
        if (middleList.empty()) {
        cout << "Stack is empty. No middle element." << std::endl;
            return T();
        }
        return middleList.front();
    }

    void deleteMiddle() {
        if (middleList.empty()) {
        cout << "Stack is empty. Cannot delete middle." << std::endl;
            return;
        }

        T middleValue = middleList.front();
        middleList.pop_front();

        stack<T> tempStack;
        while (!dataStack.empty()) {
            T topValue = dataStack.top();
            dataStack.pop();
            if (topValue != middleValue) {
                tempStack.push(topValue);
            }
        }
  while(!tempStack.empty()){
    dataStack.push(tempStack.top());
    tempStack.pop();
  }
    }
};
int main(){
    MiddleStack<int> stack;
    stack.push(18);
    stack.push(35);
    stack.push(45);
    stack.push(65);
    cout<<"Middle element---->"<<stack.getMiddle()<<endl;
}