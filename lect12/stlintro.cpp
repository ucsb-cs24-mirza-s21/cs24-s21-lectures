//stlintro.cpp
// C++ Standard Template Library
// New data structure : stack (not runtime stack)
// Last in first out principle
// Operations: O(1)
// top() // returns the value of the element on top of the stack 
// pop() // delete the element on the top of the stack
// push() // inserts an element to the top of the stack
// empty()// returns true if the stack is empty.
#include <iostream>
#include <array>
#include <stack>
#include <set> // balanced bst
using namespace std;
bool isbalanced(string expr){
    stack<char> s;
    for(auto c : expr){
        if(c == '(') s.push(c);
        if(c == ')') {
            if(s.empty()) return false;
            else s.pop();
        }
    }
    return s.empty();
}
void printInorder(array<string, 5> &arr){
    set<pair<int, string>> bst;
    cout<<"Print Inorder"<<endl;
    for(auto x:arr){
        bst.insert(make_pair(x.length(), x));

    }

    // Inorder traversal of the bst
    // Iterators: generic way of traversing data structures
    for(auto item : bst){
        cout<< item.second <<", " << item.first<<endl;
    }
    




}

int main(int argc, char const *argv[])
{
    /* code */
    // generic: store any type of element
    array<string, 5> exprList {"(())", "()", "()()()", "(()", ")("};
   
    for (auto x : exprList){
        cout<<"Is "<<x <<" balanced ? "<<isbalanced(x)<<endl;
    }
    stack<string> s;
    for (auto x : exprList){
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    printInorder(exprList);
    return 0;
}

