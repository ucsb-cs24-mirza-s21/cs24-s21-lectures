#include <iostream>
#include <queue>

using namespace std;

int main(){
    int arr[]={10, 2, 80, 70, 50, 20, 1};
    int expMedian[]={10, 2, 10, 10, 50, 20, 20};
    priority_queue<int> left;
    priority_queue<int, vector<int>, std::greater<int>> right;
    int elem;
    for (int i = 0; i< 7; i++){
        elem = arr[i];
        if(left.empty()){
            left.push(elem);
        }else{
            if(left.size()>right.size()){
                // insert max(elem, left.top()) into right PQ
                // insert min(elem, left.top()) into left PQ
                // pop to make sure the difference in size is <=1
                if(elem < left.top()){
                    right.push(left.top());
                    left.pop();
                    left.push(elem);
                }else{
                    right.push(elem);
                }          
            } else{
                if(elem>right.top()){
                    left.push(right.top());
                    right.pop();
                    right.push(elem);
                }else{
                    left.push(elem);
                }

            }

        }
        cout<<"Size of left :"<< left.size()<<" right: "<<right.size()<<endl;
        cout<<"Median actual: "<<left.top() <<" expected: "<<expMedian[i]<<endl;

    }

    
	return 0;

}
