// Online C++ compiler to run C++ program online
#include <iostream>
#include <thread>

using namespace std;

void function1(){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cout<<"Function 1 thread 1"<<endl;
}

void function2(){
    cout<<"Function 2 thread 2"<<endl;
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<endl;
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    thread mythread(function1);
    thread mythread1(function2);
    mythread.join();
    mythread1.join();
    return 0;
}
