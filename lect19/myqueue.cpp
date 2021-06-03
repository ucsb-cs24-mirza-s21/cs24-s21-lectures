// myqueue.cpp:

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class myqueue{
private:
    stack<int> f; //stack representing the front of the queue
    stack<int> r; //stack for the rear of the queue
public:
    void push(int item);    
    void pop();
    int front();
    bool empty() const;
   
};
bool myqueue::empty() const{
    return true;
      
}  
void myqueue::push(int item){

    r.push(item);
    
} 
//precondition: stack is not empty   
void myqueue::pop(){
    if(f.empty()){
        while(!r.empty()){
            f.push(r.top());
            r.pop();
        }
    }
    f.pop();

}
int myqueue::front(){  
    if(f.empty()){
        while(!r.empty()){
            f.push(r.top());
            r.pop();
        }
    }
    return f.top();
    
}


int main(int argc, char const *argv[])
{
    myqueue testq;
    vector<int> v {1, 2, 3, 4, 5};
    cout<<"Filling the queue: "<<endl;
    for(auto&x: v){
        cout<<"Push: "<<x<<" ";
        testq.push(x);
    }
    cout<<endl;
    cout<<"Print front while emptying the queue"<<endl;
    auto it = v.begin();
    for(auto item: v){
        cout<<"\t   actual: "<< testq.front()<<" expected: "<<*it<<endl;
        it++;
        testq.pop();    
    }
    return 0;
}
