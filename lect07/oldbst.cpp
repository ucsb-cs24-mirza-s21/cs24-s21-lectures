//bst.cpp
#include <iostream>
using namespace std;

class bst{
   public:
      bst(){root = 0;}
      ~bst(){}
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
      int x;

};
bool bst::insert(int value){
	return true;
}

void bst::print() const{
   cout<<root->data<<endl;
}

int main(){
  
   return 0;
}
