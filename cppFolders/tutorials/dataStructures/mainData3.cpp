// videos 9, 10, 11,CodeBeauty Data Structures playlist
// Tree data structures videos 9 & 10

#include <iostream>
#include <vector>
using namespace std;

//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//};
//
//Node* createNode(int data) {
//    Node* newNode = new Node();
//    newNode->data = data;
//    newNode->left = newNode->right = nullptr;
//    return newNode;
//};
//
//// depth first search
//void printTree(Node* root) {
//    if (root == nullptr) return;
//// preorder algorithm
//
//    cout << root->data << endl;
//    printTree(root->left);
//    printTree(root->right);
//
//// inorder algorithm? left most to right most
//
//    printTree(root->left);
//    cout << root->data << endl;
//    printTree(root->right);
//
//
//// postorder algorithm? data after order is determined root last
//
//    printTree(root->left);
//    printTree(root->right);
//    cout << root->data << endl;
//
//};
//
//int main() {
//    // level 1
//    Node* root = createNode(1);
//    // level 2
//    root->left = createNode(2);
//    root->right = createNode(3);
//    // level 3
//    root->left->left = createNode(4);
//    root->left->right = createNode(5);
//    root->right->left = createNode(6);
//    root->right->right = createNode(7);
//    // level 4 left
//    root->left->left->left = createNode(8);
//    root->left->left->right = createNode(9);
//    root->left->right->left = createNode(10);
//    root->left->right->right = createNode(11);
//    // level 4 right
//    root->right->left->left = createNode(12);
//    root->right->left->right = createNode(13);
//    root->right->right->left = createNode(14);
//    root->right->right->right = createNode(15);
//    
//    printTree(root);
//
//};
//
////video 11
// STL Vector

int main() {
    vector<int> nums;
    nums.push_back(0);

    for (int i = 1; i <= 10; i++) {
        nums.push_back(i);
    };

    for (int num : nums) {
        cout << num << endl;
    };

    // work with iterators...& vectors... need to read c++ docs...
    // vectors are like classes dynamic arrays are error prone, better to use vectors OR static Arrays per use case
};