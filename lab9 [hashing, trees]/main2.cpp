#include <iostream>
#include <vector>

using namespace std;

// Define a struct to represent each node in the hash table
struct Node {
    int key;
    int value;
    Node* next;
};

// Define the size of the hash table
const int TABLE_SIZE = 10;

// Define the hash function
int hashFunc(int key) {
    return key % TABLE_SIZE;
}

// Insert a new node into the hash table
void insert(Node* table[], int key, int value) {
    // Compute the hash value
    int index = hashFunc(key);
    
    // Create a new node
    Node* newNode = new Node;
    newNode->key = key;
    newNode->value = value;
    newNode->next = nullptr;
    
    // Insert the node into the linked list at the appropriate bucket
    if (table[index] == nullptr) {
        table[index] = newNode;
    } else {
        Node* curr = table[index];
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// Print the contents of the hash table
void printTable(Node* table[]) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": ";
        Node* curr = table[i];
        while (curr != nullptr) {
            cout << "(" << curr->key << ", " << curr->value << ") ";
            curr = curr->next;
        }
        cout << endl;
    }
}

int main() {
    // Create an array of linked lists to store the nodes
    Node* table[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = nullptr;
    }
    
    // Traverse the given array and insert each element into the hash table
    vector<int> arr = {1,4,7,1,5,2,4,1,3,5};
    for (int i = 0; i < arr.size(); i++) {
        insert(table, arr[i], i);
    }
    
    // Print the contents of the hash table
    printTable(table);
    
    return 0;
}
