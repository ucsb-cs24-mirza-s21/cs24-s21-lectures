//bst.cpp
#include <iostream>
using namespace std;

class bst{
   public:
      bst(){root = 0;}
	  //incorrect destructor
      ~bst(){ delete root;}
      bool insert(int value); // return false if the value already exists
      bool search(int value) const;
      int min() const;
      int max() const;
      int successor(int value) const;
      bool deleteNode(int value);
      void print() const;
   private:
      class bstNode{
         public:
            bstNode* left;
            bstNode* right;
            bstNode* parent;
            int const data;
            bstNode(const int& d):data{d}{
               left = right = parent =0;
            }
      };
      bstNode* root;

};
bool bst::insert(int value){
	//incomplete function
    root = new bstNode{value};
    return true;
}

void bst::print() const{
	//incomplete function
    cout<< root->data<<endl;
}

int main(){
    bst b1;
    b1.insert(10);
    b1.print();
	int *p = nullptr;
	cout<<*p;
   return 0;
}
