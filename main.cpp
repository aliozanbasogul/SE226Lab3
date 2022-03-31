#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int x, Node *n){data = x; next = n;}

};

Node *top;

void push(int data){
    Node *tmp = new Node(0, nullptr);
    tmp ->data = data;
    tmp-> next = top;
    top = tmp;
}

int isEmpty(){
    return top == nullptr;
}

void pop(){
    Node *tmp;
    if (top == nullptr){
        exit(1);
    } else{
        tmp = top;
        top = top -> next;
        delete tmp;
    }
}

void display(){
    Node *tmp;

    if (top == nullptr){
        cout << "Out of space!" << endl;
        exit(1);
    } else{
        tmp = top;
        while (tmp != nullptr){
            cout << tmp -> data << "--" << endl;
            tmp = tmp -> next;
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    cout << endl;

    display();

    return 0;
}
