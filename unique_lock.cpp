#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
int shared_value = 0;
mutex objMutex;
void increment_value(){

     unique_lock<mutex> lock(objMutex,defer_lock);
     lock.lock();
     shared_value=shared_value+2;
     cout<<"shared value 1: "<<shared_value<<endl;
     lock.unlock();
     
     lock.lock();
     shared_value=0;
     cout<<"shared value 2: "<<shared_value<<endl;
     lock.unlock();
     
}
int main(){

    thread t1(increment_value);
    thread t2(increment_value);
    thread t3(increment_value);
    thread t4(increment_value);
    thread t5(increment_value);
    

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();

  cout<<"shared value : "<< shared_value<<endl;
}
