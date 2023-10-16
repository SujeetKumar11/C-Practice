#include <iostream> 
using namespace std;

class Node { public:
int data; 
Node* next; Node* prev;

Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList { private:
Node* head; Node* tail;

public:
DoublyLinkedList() : head(nullptr), tail(nullptr) {}

void insertAtBeginning(int data) { Node* newNode = new Node(data); 
if (!head) {
head = tail = newNode;
} 
else {
newNode->next = head; head->prev = newNode; head = newNode;
}
}
void insertAtEnd(int data) {
Node* newNode = new Node(data); if (!tail) {
head = tail = newNode;
} else {
tail->next = newNode; newNode->prev = tail; tail = newNode;
}
}

void deleteFromBeginning() 
{ 
    if (!head) {
cout << "List is empty. Nothing to delete.\n"; 
return;
}

Node* temp = head; head = head->next; 
if (head) {
head->prev = nullptr;
} else {
tail = nullptr;
}
delete temp;
}

void deleteFromEnd() { if (!tail) {
cout << "List is empty. Nothing to delete.\n"; 
return;
}

Node* temp = tail; 
tail = tail->prev;
if (tail) {
tail->next = nullptr;
} else {
head = nullptr;
}
delete temp;

}

void display() {
Node* current = head; 
while (current) {
cout << current->data << " "; current = current->next;
}
std::cout << "\n";
}
};

int main() { DoublyLinkedList dll;
dll.insertAtBeginning(1); 
dll.insertAtBeginning(2); 
dll.insertAtEnd(3); 
dll.insertAtEnd(4);

cout << "Doubly Linked List: "; 
dll.display();

dll.deleteFromBeginning();
cout << "After deleting from beginning: "; 
dll.display();

dll.deleteFromEnd();
cout << "After deleting from end: "; 
dll.display();

return 0;
}
