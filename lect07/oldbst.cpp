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
      int x;

};
bool bst::insert(int value){
<<<<<<< HEAD:lect07/oldbst.cpp
	return true;
}

void bst::print() const{
   cout<<root->data<<endl;
}

int main(){
  
=======
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
>>>>>>> ad36c6005c187b5286e8d9de7b1e73b08d865328:lect07/bst.cpp
   return 0;
}
