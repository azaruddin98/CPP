#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
int count = 0;
mutex objMut;
void increment(){
    for(int i=0;i<100000;i++)
    {
         lock_guard<mutex> lock(objMut);
            ++count;
    }
}
int main(){

        thread t1(increment);
        thread t2(increment);
        t1.join();
        t2.join();

        cout<<"final counter value: "<<count<<endl;
        return 0;
}
