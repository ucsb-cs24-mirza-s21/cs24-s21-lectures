//sorting.cpp
#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;
//Precondition: unsorted vector v of size N
//Post condition: sorted array in ascending order
void selectionSort(vector<int>& v){
   int N = v.size();
   for(int i =0; i < N; i++){ 
      int index=i;
      for(int j = i+1; j<N;j++){  
         if(v[j]<v[index]){ 
            index = j;
         }
      }
      int tmp = v[i];
      v[i] = v[index];
      v[index]=tmp;
   }
}

int main(){
    vector<int> v {10, 2, 80, 70, 50, 20};
    selectionSort(v);
    for(auto item: v){
       cout<<item<<" ";
    }
    cout<<endl;

    
	return 0;

}