#include<iostream>
#include<thread>
#include<mutex>
#include <chrono>

/*In C++, std::unique_lock provides more flexibility than std::lock_guard, including timed locking, 
which allows a thread to attempt to acquire a lock for a specified duration or until a specific time point.
🕒 Timed Locking with std::unique_lock
You can use:
try_lock_for(duration)
try_lock_until(time_point)
*/

using namespace std;
int shared_value = 0;
timed_mutex objMutex;
void increment_value(){

     unique_lock<timed_mutex> lock(objMutex,defer_lock);
     if(lock.try_lock_for(chrono::milliseconds(100)))
     {
     cout<<"this thread: "<< this_thread::get_id()<<" : Acquire a lock";
     shared_value=shared_value+2;
     cout<<"shared value 1: "<<shared_value<<endl;
     }
     else
     {
         cout << "Thread " << this_thread::get_id() << " failed to acquire the lock.\n";
     }
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
