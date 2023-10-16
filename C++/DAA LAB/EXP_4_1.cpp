#include <iostream> 
using namespace std; 
class Node {
public:
int data; Node* next;
Node(int value) : data(value), next(nullptr) {}
};

class SinglyLinkedList { private:
Node* head;

public:
SinglyLinkedList() : head(nullptr) {} 
void insertAtBeginning(int data) {
Node* newNode = new Node(data); 
newNode->next = head;
head = newNode;
}

void insertAtEnd(int data) {
Node* newNode = new Node(data); 
if (!head) {
head = newNode;
} else {
Node* current = head; while (current->next) {
current = current->next;
}
current->next = newNode;
}
}

void deleteFromBeginning() { if (!head) {
cout << "List is empty. Nothing to delete.\n"; 
return;
}
Node* temp = head; 
head = head->next; 
delete temp;
}

void deleteFromEnd() { if (!head) {
cout << "List is empty. Nothing to delete.\n"; 
return;
}
if (!head->next) { delete head; head = nullptr; 
return;
}
Node* current = head;
while (current->next->next) { current = current->next;
}
delete current->next; current->next = nullptr;
}

void display() {
Node* current = head; while (current) {
cout << current->data << " "; 
current = current->next;
}
cout << "\n";
}
};

int main() { SinglyLinkedList s;

s.insertAtBeginning(6); 
s.insertAtBeginning(4); 
s.insertAtEnd(12);
s.insertAtEnd(9);
cout << "Singly Linked List: ";
s.display(); 
s.deleteFromBeginning();
cout << "After deleting from beginning: "; 
s.display();
s.deleteFromEnd();
cout << "After deleting from end: "; 
s.display();

return 0;
}
