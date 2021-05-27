//sorting.cpp
#include <iostream>
#include <queue>
#include <iomanip>
#include <set>
#include <vector>
#include <time.h>

using namespace std;
//Precondition: unsorted vector v of size N
//Post condition: sorted array in ascending order
template<class T>
void selectionSort(vector<T>& v){
   int N = v.size();
   for(int i =0; i < N; i++){ 
      int index=i;
      for(int j = i+1; j< N;j++){  
         if(v[j].size() < v[index].size()){ 
            index = j;
         }
      }
      // Running  time is not constant for the following three lines
      // We are calling the copy constructor and copy assignment
      // both of which iterate over all the keys of the tree
      // Running time depends on M (maximum size of the trees)
      T tmp = v[i];
      v[i] = v[index];
      v[index]=tmp;
   }
}
// O(N^2) for vector of ints 
// not the case for vector of trees 
template  <class T>
void print(vector<T>&v){
    for(auto &tree: v){
    cout<<"Size: "<< tree->size()<<endl;
    cout<<"Elements: "<<endl;
    for(auto key:tree){//inorder traversal
        cout<<key<<" ";
    }
    cout<<endl;
    cout<<endl;

   }
   cout<<endl;
}

int main(){
   vector<set<int>> forest;
   int N = 1000; // number of trees
   int M = 10000; // maximum number of keys in each tree 
   for(int i=0; i<N; i++){
      forest.push_back(set<int>{});
      int j = 0;
      int n = rand() % M; // number of keys in tree at index i
      int Vmax = 10000; // max value of the keys
      while(j<n){ // inserting keys into tree number i
         forest[i].insert(rand()%Vmax);
         j++;
      }
   }
   //print(forest);
   clock_t t = clock();
   selectionSort(forest);
   t = clock() - t;
   //print(forest);
 
   cout<<"Time to sort forest with  "<< N <<" trees and a max of "<<M<< " keys is "
       <<t*1000/CLOCKS_PER_SEC<<" ms"<<endl;
    
	return 0;

}