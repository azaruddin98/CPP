// Online C++ compiler to run C++ program online
#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
using namespace std;

mutex objMutex;
int count=0;
class Singleton{
  
    private:
    static Singleton *objSingle;
    public:
    static Singleton* getInstance(){
        if(objSingle == NULL){
        lock_guard<mutex> lock(objMutex);
        objSingle = new Singleton;
        }
        return objSingle;
    }
    private:
    Singleton(){
        cout<<"Normal Constructor"<<endl;
    }
    Singleton& operator=(const Singleton& obj){
        cout<<"Assignement Operator Private";
        return *this;
    }
    Singleton(const Singleton& objSingleton){
        cout<<"Copy Constructor private"<<endl;
    }
    public:
    void increment(int value){
        
        for(int i=0;i<1000000;i++){
            count = i;
        }
        //cout<<"count value:"<<count<<endl;
    }
};
Singleton* Singleton::objSingle = NULL;

int main() {
    // Write C++ code here
    Singleton *obj =  Singleton::getInstance();
   
    thread t1(&Singleton::increment,&obj);
    thread t2(&Singleton::increment,&obj);
    thread t3(&Singleton::increment,&obj);
    t1.join();
    t2.join();
    t3.join();
    cout<<"final counter value: "<<count<<endl;


    return 0;
}
