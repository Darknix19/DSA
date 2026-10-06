#include <iostream>
using namespace std;

class stack{
    int arr[5];
    int top;

    public:
    stack(){
        top = -1;
    }

    void push(int value){
        if(top == 4){
            cout << "Stack Overflow";
        }

        arr[++top] = value;
    }

    void pop(){
        if(top == -1){
            cout << "Stack Underflow";
        }

        cout << "Deleted: " << arr[top] << endl;
        top--;
    }

    void search(int value){
        for(int i=top; i>= 0; i--){
            if(arr[i] == value){
                cout << "Found" << " " << endl;
                return;
            }else{
                cout << "Not Found" << endl;
            }
        }
    }

    void display(){
        for(int i=top; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.search(30);

    s.pop();

    s.display();

    return 0;
}