//pq.cpp
// Heap: Implementation
// min-Heap Operations: 
// (min) top()O(1), (insert) push:O(logN), (delete min) pop O(logN)
//  
// max-Heap Operations: 
// (max) top()O(1), (insert) push:O(logN), (delete max) pop O(logN)
// C++ STL: priority queue: can be configured as min or max heap
// Element on top of the heap: highest priority
// We will tell pq how to prioritize
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int arr[]={10, 2, 80, 70, 50, 20};
    priority_queue<int> pq1; //max Heap
    priority_queue<int, vector<int>, std::less<int>> pq2; //max Heap
    priority_queue<int, vector<int>, std::greater<int>> pq; //min Heap 
    //uses the comparison class to compare the priority of keys
    // Third parameter is called a comparison class
    // A class that can be used to compare two things (int)
                            
    for(int i=0; i<6;i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    
	return 0;

}