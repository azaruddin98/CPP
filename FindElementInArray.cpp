#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int arr[]={10,20,30,40,50,60,70,22,45,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    auto it = find(arr,arr+n,22);  // Starting address of Array, End address of the array,Key which needs to find
    cout<<it<<endl;
    cout<<it-arr<<endl; // returns address of the find elements, to find index we need to substract from the starting address of the array.
    cout<<arr[it-arr]<<endl;
    return 0;
}
