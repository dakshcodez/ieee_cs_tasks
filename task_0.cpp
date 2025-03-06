#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList{
    public:
        Node* head;

        DoublyLinkedList(){
            head = nullptr;
        }

        struct Node* createNewNode(int val){
            Node* newNode = new Node(val);
            return newNode;
        }

        void insertAtBeg(int val){
            Node* newNode = createNewNode(val);
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }

        void insertAtEnd(int val){
            Node* newNode = createNewNode(val);
            if (head == nullptr){
                head = newNode;
                return;
            }
            Node* temp = head;
            while (temp -> next != nullptr){
                temp = temp -> next;
            }
            temp -> next = newNode;
            newNode -> prev = temp;
        }

        void forwardTraverse(){
            Node* temp = head;
            cout<<"Forward Traversal: ";
            while (temp != nullptr){
                cout<<temp -> data<<" -> ";
                temp = temp -> next;
            }
            cout<<"NULL"<<endl;
        }

        void backwardTraverse(){
            Node* temp = head;
            while(temp -> next != nullptr){
                temp = temp -> next;
            }

            cout<<"Backward Traversal: ";
            while (temp != nullptr){
                cout<<temp -> data<<" -> ";
                temp = temp->prev;
            }
            cout<<"NULL"<<endl;
        }
};

int main(){
    DoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    list.forwardTraverse();
    list.backwardTraverse();
    return 0;
}
