//linkedlist.cpp

// C++ Rule of 3


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
    void clear(node* p); //helper functions
public:
    linkedlist(/* args */):head(nullptr), tail(nullptr){}
    linkedlist(linkedlist& source); // copy constructor
    linkedlist& operator=(linkedlist& source);
    ~linkedlist();
    void append(int value);
    void prepend(int value); // add to the beginning
    void deleteValue(int value);
    bool search(int value);
    void clear(); // delete all of the nodes in the linked list

    void print() const;
    int getLength() const;
};

//cout << l1; 
//operator<<(cout, l1)
// cout<<l2<<l3;
// cout is an object of class ostream!!!
ostream& operator<<(ostream& out, linkedlist& ll){
    ll.print();
    return out;
}



// mm is the implicit object
// linkedlist(ll);



linkedlist::linkedlist(linkedlist& source){
    // source is a reference, it is just an alias or nickname 
    // for the parameter that was passed in
    // default copy constructor
    cout<<"Default copy constructor"<<endl;
    head = tail = nullptr;
    node* p = source.head;
    while(p){
        int val = p->data;
        // add a new node with value val
        // to the implicit linked list
        append(val); //
        p = p->next;
    }


}
// l1 = l2 , void return type
// l1 = l2 = l3; linkedlist& return type
linkedlist& linkedlist::operator=(linkedlist& source){
    if (this == &source){
        // checking for self assignment
        return *this;
    }
    // clear the existing nodes of implicit object (*this)
    clear();
    // deep copy of the nodes of (source) into this object
    head = tail = nullptr;
    // in a loop call append
    return *this;

}

void test_copy_assignment(){
    // series of test cases to test the append function
    // Case 1
    cout<<"Testing copy assignment"<<endl;
    linkedlist ll; //empty linked 
    ll.append(10);
    ll.append(20);
   
    linkedlist mm; // implicit call to the copy constructor
    mm.append(30);
    mm.append(40);
    mm.append(50);
    mm = ll; 

    //mm = mm;
    /*
    int x, y, z;
    x = y = z = 0;

    linkedlist l1, l2, l3;
    l1 = l2 = l3;*/

    cout<<"Expect to get 10, 20"<<endl;
    ll.print();
    cout<<"Expect to get 10, 20"<<endl;
    mm.print();
    cout << mm; // printing out all the nodes mm.print()


}

linkedlist::~linkedlist()
{
    //default: doesn't do anything
    //cout<<"This is the destructor"<<endl;
    clear();

}
// add a node to the end of the linked list.
void linkedlist::append(int value){
    // create a node with data 10
    node* n = new node{value, nullptr}; // this node is on the stack
    if(!tail) { //empty list
        head = n;
        tail = n;
    }else{
        tail->next = n;
        tail = n;
    }

    //print();
}

void linkedlist::clear(){
    clear(head);
     // set the head and tail pointers to null
    head = tail = nullptr;
}
// precondition: the linked list is valid
// p is pointing to the head node
// postcondition: the linked list is empty 
void linkedlist::clear(node* p){
    // delete all the nodes in the linked list are deleted 
    // on the heap
    if(!p){ // Base case // p == nullptr
        return;
    }
    // clear the rest of the linked list
    clear(p->next);
    // delete the current node
    delete p;   
   
}

// you must test every function that you write
void test_append(){
    // series of test cases to test the append function
    // Memory leak
    // Case 1

    cout<<"Testing append"<<endl;
    linkedlist ll; //empty linked 
    ll.append(10);
    cout<<"Expect to get 10"<<endl;
    ll.print();// overwrites the node that was on the stack
    //Case 2
    
    ll.append(20);
    cout<<"Expect to get 10, 20"<<endl;
    ll.print();
    //ll.clear();
    // destructor is called on ll

}

void test_clear(){
    // series of test cases to test the append function
    // Case 1
    cout<<"Testing clear"<<endl;
    linkedlist ll; //empty linked 
    ll.append(10);
    ll.append(20);
    cout<<"Expect to get 10, 20"<<endl;
    ll.print();
    ll.clear();
    cout<<"Expect to get nothing"<<endl;
    ll.print();


}

void test_copy_constructor(){
    // series of test cases to test the append function
    // Case 1
    cout<<"Testing copy constructor"<<endl;
    linkedlist ll; //empty linked 
    ll.append(10);
    ll.append(20);
   
    linkedlist mm {ll}; // implicit call to the copy constructor

    cout<<"Expect to get 10, 20"<<endl;
    ll.print();
    cout<<"Expect to get 10, 20"<<endl;
    mm.print();


}







//[10, nullptr]
void linkedlist::print() const{
    node* p = head;//traversal pointer
    while(p){
        cout<<p->data<<endl;
        p = p->next;
    }

}


int main(int argc, char const *argv[])
{
    //test_append();
    //test_copy_constructor();
    test_copy_assignment();
    
   /* linkedlist* p = new linkedlist;
    delete p;*/

//    test_clear();
   // ll.append(20);
   // ll.print();
    return 0;
}

