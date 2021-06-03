// minstack.cpp:

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class minstack{
private:
    stack<pair<int,int>> s;

public:
    void push(int item);    
    void pop();
    int top() const;
    int min() const;
    bool empty() const;
   
};

void minstack::push(int item){
    if(s.empty()) s.push(make_pair(item, item));
    else{
        int minSoFar = min();
        int newmin = item <= minSoFar? item: minSoFar;
        s.push(make_pair(item, newmin));
    } 
}   
void minstack::pop(){
    s.pop();   
}
int minstack::top() const{

    return s.top().first;
}
int minstack::min() const{

    return s.top().second;
    
}
bool minstack::empty() const{
    return s.empty();
    
}

int main(int argc, char const *argv[])
{
    vector<int> v    {5, 3, 7, 1, 0, -1};
    vector<int> vmin {5, 3, 3, 1, 0, -1 };
    minstack s;
    auto it = vmin.begin();
    cout<<"Fill in the stack: (top, min)"<<endl;
    for(auto item: v){
        s.push(item);
        cout<<"Pushed: "<<item<<endl;
        cout<<"\t actual: ("<<s.top()<<", "<<s.min()<<")"<<endl;
        cout<<"\t expectd: ("<<item <<", "<< *it <<")"<<endl;
        it++;
    }
    auto vit = v.end();
    cout<<"Popping elements out"<<endl;
    while(!s.empty()){
        it--;
        vit--;
        cout<<"\t actual: ("<<s.top()<<", "<<s.min()<<")"<<endl;
        cout<<"\t expectd: ("<<*vit <<", "<< *it <<")"<<endl;
        s.pop();

    }


    
    return 0;
}


