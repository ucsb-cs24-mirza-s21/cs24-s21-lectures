//linkedlist.cpp
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;//member variable
};

class linkedlist
{
private:
    /* data */
    node* head;
    node* tail;
public:
    linkedlist(/* args */):head(nullptr), tail(nullptr){}
    ~linkedlist();
    void append(int value);
    void prepend(int value); // add to the beginning
    void deleteValue(int value);
    bool search(int value);

    void print() const;
    int getLength() const;
};


linkedlist::~linkedlist()
{
}

void linkedlist::append(int value){
    // create a node with data 10
    node n {10, nullptr};
    // fix the head and tail pointers
    head = &n;
    tail = &n;
    print();
}

void linkedlist::print() const{
    node* p = head;//traversal pointer
    while(p){
        cout<<p->data<<endl;
        p = p->next;
    }

}


int main(int argc, char const *argv[])
{
    linkedlist ll;
    ll.append(10);
   // ll.append(20);
   // ll.print();
    return 0;
}

