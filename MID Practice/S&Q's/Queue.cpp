#include <iostream>
using namespace std;

class queue{
    int arr[5];
    int front;
    int rear;

    public:
    queue(){
        front = 0;
        rear = -1;
    }

    void enqueue(int value){
        if(rear == 4){
            cout << "Queue full\n";
        }
        arr[++rear] = value;
    }

    void dequeue(){
        if(front > rear){
            cout << "Queue Empty\n";
        }
        cout << "Deleted: " << arr[front] << endl;
        front++;
    }

    void search(int value){
        for(int i=front; i <= rear; i++){
            if(arr[i] == value){
                cout << "Found\n";
                return;
            }
        }
        cout << "Not Found\n";
    }

    void display(){
        for(int i=0; i<rear; i++){
            cout << arr[i] << " " <<endl;
        }
    }
};

int main(){
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.search(20);

    q.dequeue();

    q.display();

    return 0;
}