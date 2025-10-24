#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100; // максимален размер на стека
    int data[MAX_SIZE];
    int topIndex; // индекс на най-горния елемент

public:
    Stack() {
        topIndex = -1; // празен стек
    }

    // Добавя елемент на върха
    void push(int x) {
        if (topIndex >= MAX_SIZE - 1) {
            cout << "Error: Stack overflow!" << endl;
            return;
        }
        data[++topIndex] = x;
    }

    // Премахва най-горния елемент
    void pop() {
        if (topIndex < 0) {
            cout << "Error: Stack underflow!" << endl;
            return;
        }
        topIndex--;
    }

    // Връща стойността на върха (без да го маха)
    int top() {
        if (topIndex < 0) {
            cout << "Error: Stack is empty!" << endl;
            return -1;
        }
        return data[topIndex];
    }

    // Проверява дали стекът е празен
    bool empty() {
        return topIndex < 0;
    }

    // Връща броя на елементите
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 20
    cout << "Stack size: " << s.size() << endl;

    return 0;
}
