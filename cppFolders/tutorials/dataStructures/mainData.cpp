#include <iostream>
using namespace std;

// YouTube CodeBeauty Data Structures playlist
// function here...
void arrRay() // video 2
{
    // total, avg, 2yrs 
    /*
    float month1 = 100;
    float month2 = 220;
    float month3 = 300;
    float month4 = 0;
    float month5 = 200;
    float month6 = 250;
    */

    int size = 1;
    float monthsArray[size]; // = { 100, 220, 300, 0, 200, 250 }; 
    float total = 0;
    float avg = 0;


    cout << "How many months are you entering?: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++) { 
        cout << "Enter month amount for month "<< i+1 << ": " << endl;
        cin >> monthsArray[i];
        total += monthsArray[i];
        avg = total / size;
    }

    // float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5];
    // float avg = total / 6;
    float twoYrs = avg * 24;

    cout << "total = " << total << endl;
    cout << "avg = " << avg << endl;
    cout << "Guess-timated over 2 years = " << twoYrs << endl;

//    system("pause>0");
}


//--------------
// video 3

class Node {
public:
    int value;
    Node* next;
};


void printLs(class Node*n);

//--------------
// video 4
// insert a node into a linked list


void insertFront(Node**head, int newValue) {
    // prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // put it in front of the head
    newNode->next = *head;
    // move head of the list to point to new node
    *head = newNode;
};

void insertEnd(Node** head, int newValue) {
    // prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    // if linked list is empty, newNode will be head
    if(*head == NULL) {
        *head = newNode;
        return;
    };
    // find the last node
    Node* last = *head;
    while(last->next != NULL) {
        last = last->next;
    };
    // insert newNode after last node
    last->next = newNode;
};

void insertAfter(Node*previous, int newValue) {
    // check if previous node is NULL
    if(previous == NULL) {
        cout<<"Previous node can't be NULL";
        return;
    };
    // prepare a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    // insert the middle node after previous node
    newNode->next = previous->next;
    previous->next = newNode;
};

//------end video 4-------
void linkListing() {
    // value & pointers
    // dynamic size, unlike arrays, but no random access to the linked list
    Node* head;
    head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    second->value = 2;
    third->value = 3;

    head->next = second;
    second->next = third;
    third->next = NULL;

    insertFront(&head, -1);
    insertEnd(&head, 4);
    insertAfter(second, 7);
    printLs(head);
};


void printLs(Node*n) {
    while (n!=NULL) {
        cout << n->value << endl;
        n = n->next;
    }
};


//--------------------
// video 5
void stacky() {
    
};



// run the program
int main() {            // VIDEOS
//    arrRay();         // 2
//    linkListing();    // 3 & 4
      stacky();         // 5


}