#include <iostream>
#include <algorithm>
int compare(int a, int b){
    return a>b;
}

using namespace std;
int main() {
    int arr[]={10,20,100,120,140,21,24,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
