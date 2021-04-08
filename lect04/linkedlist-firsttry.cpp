//linkedlist.cpp

struct node
{
    int data;
    node* next;//member variable
};


int main(int argc, char const *argv[])
{
    node n1 {10, nullptr};
    node n2 {20, nullptr};
    n1.next = &n2;
    return 0;
}

