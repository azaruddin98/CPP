// Online C++ compiler to run C++ program online
#include <iostream>
#include <memory>

using namespace std;
int main() {
    // Write C++ code here
    unique_ptr<int> ptr = make_unique<int>(10);
    unique_ptr<int> ptr2 = std::move(ptr);
    
    shared_ptr<int> ptr3 = make_shared<int>(20);
    shared_ptr<int> ptr4 = ptr3;
    
    
    cout<<ptr4.use_count()<<endl;
    ptr3.reset();
    cout<<ptr4.use_count()<<endl;

    return 0;
}
