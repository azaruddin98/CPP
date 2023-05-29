#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int arr[]={10,20,20,21,24,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool present = binary_search(arr,arr+n,21);
    if(present){
        cout<<"element is present"<<endl;
    }
    else
    {
        cout<<"element is not present"<<endl;
    }
    auto it = lower_bound(arr,arr+n,24);
    cout<<it-arr<<endl;
    //cout<<arr[it-arr]<<endl;

    auto it1 = upper_bound(arr,arr+n,24);
    cout<<it1-arr<<endl;
    return 0;
}
