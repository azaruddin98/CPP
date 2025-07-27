/*Multithreading is a technique where a program is divided into smaller units of execution called threads.
Each thread runs independently but shares resources like memory, allowing tasks to be performed simultaneously. 
This helps improve performance by utilizing multiple CPU cores efficiently. 
Multithreading support was introduced in C++11 with the introduction of <thread> header file*/

#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
int count = 0;
mutex objMut;
void increment(){
    for(int i=0;i<100000;i++)
    {
        /*In C++, lock_guard is a simple class that is used to manage the locking and unlocking of a mutex.
        Its main purpose is to automatically lock a mutex when it is created and automatically unlock it when the 
        lock_guard object goes out of scope. Following is the syntax to use lock_guard in C++*/
        
         lock_guard<mutex> lock(objMut);
            ++count;
    }
}
int main(){
        
        thread t1(increment);
        thread t2(increment);
        /*It ensures that the calling thread waits for the specified thread to complete its execution.*/
        t1.join();
        t2.join();

        cout<<"final counter value: "<<count<<endl;
        return 0;
}
