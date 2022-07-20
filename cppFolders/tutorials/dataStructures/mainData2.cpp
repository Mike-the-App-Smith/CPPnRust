// videos 5, 6, & 7 CodeBeauty Data Structures playlist
#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <string>
using namespace std;

// STACK video 5
/*
void printStack(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl; 
        stack.pop();
    };
};

int main() {
    // empty, size, push, pop, top
    stack<int>numbersStack;
    numbersStack.push(10);
    numbersStack.push(80);
    numbersStack.push(50);
    numbersStack.pop();

    

    if(numbersStack.empty()) 
        cout << "Empty stack" << endl;
    else
        cout << "Size of stack: " << numbersStack.size() << endl;
    
    printStack(numbersStack);
}

*/

// video 6 CodeBeauty Data Structures playlist
// QUEUE
/*
void printQueue(queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << " ";
        queue.pop();
    };
    cout << endl;
};

int main() {
    queue<int> myQ;
    myQ.push(10);
    myQ.push(80);
    myQ.push(50);

    cout << "Size is " << myQ.size() << endl;
    cout << "First element is " << myQ.front() << endl;
    cout << "Last element is " << myQ.back() << endl;

    cout << "My queue: " << endl;
    printQueue(myQ);

};
*/

// video 7 CodeBeauty Data Structures playlist
// MAP = dictionary = JSON
// #include <unordered_map> to order it as it was entered not alpha-numeric

// REWATCH THIS AS NEEDED

int main() {
    map<string, string> myMap;
    myMap.insert(pair<string, string>("key", "value"));
    myMap.insert(pair<string, string>("key2", "value2"));
    myMap.insert(pair<string, string>("apple", "sau gua"));

    for (auto pair : myMap) 
    cout << pair.first << ": " << pair.second << endl;

};