#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class Doubly{
    node *head;

    public:
    Doubly(){
        head = NULL;
    }

    void insert(int value){
        node *newNode = new node(value);

        if(head == NULL){
            head = newNode;
        }

        node *temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    void displayForward(){
        node *temp = head;

        while(temp != NULL){
            cout << temp->data << "";
            temp = temp->next;
        }

        cout << endl;
    }

    void displayBackward(){
        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        while(temp != NULL){
            cout << temp->data << "";
            temp = temp->prev;
        }
        
        cout << endl;
    }

    void search(int value){
        node *temp = head;

        while (temp != NULL)
        {
            if(temp->data == value){
                cout << "Value found" << endl;
            }

            temp = temp->next;
        }
    
        cout << "Not Found" << endl;
    }

    void deleteNode(int value){

        node *temp = head;

        while (temp != NULL &&  temp->data != value)
        {
            temp = temp->next;
        }
        
        if(temp == NULL){
            cout << "value not found"<< endl;
        }

        if(temp == head){
            head = head->next;

            if(head != NULL){
                head->prev = NULL;
            }

            delete temp;
        }

        if(temp->next != NULL){
            temp->next->prev = temp->prev;
        }

        temp->prev->next = temp->next;

        delete temp;
    }
};

int main(){

    Doubly list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Forward: ";
    list.displayForward();

    cout << "Backward: ";
    list.displayBackward();

    list.search(30);

    list.deleteNode(20);

    cout << "After Deltetion: ";
    list.displayForward();

    return 0;
}