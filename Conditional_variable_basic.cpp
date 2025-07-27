#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
#include <condition_variable>



using namespace std;
int shared_value = 0;
mutex objMutex;
condition_variable cv;
bool ready = false;
void worker(){
    unique_lock<mutex> lock(objMutex);
    cv.wait(lock,[]{return ready;});
    cout<<"worker thread is ready"<<endl;
}
void setReady(){
    this_thread::sleep_for(chrono::seconds(1));
    lock_guard<mutex> lock(objMutex);
    ready =  true;
    cv.notify_one();
}
int main(){
   thread t1(worker); // worker thread started but waiting for lock to aquire because of cv.wait // which is waiting for ready variable to notify some thread to TRUE
   thread t2(setReady);
   // started 1 second timer and after expiry take same mutex which worker is waiting to acquire, and make variable TRUE and notify to waiting thread.
   
   t1.join();
   t2.join();

}
