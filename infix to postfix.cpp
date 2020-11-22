#include <iostream>
using namespace std;

struct node
{
    char data;
    node*next = nullptr;
};
class stack
{
    node*top = nullptr;
    bool isEmpty(){if (top = nullptr) return true; return false;}
    void push(char x) {
        if (isEmpty())
        { 
            node* temp = new node; 
            top = temp;
            top->next = nullptr; 
            top->data = x;
        } 
        else
        {
            node*temp = new node;
            temp ->next = top;
            temp->data = x;
            top = temp;
        }
        
    }
};


int main()
{



    return 0;
}
