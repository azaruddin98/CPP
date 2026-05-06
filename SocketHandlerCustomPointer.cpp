// Online C++ compiler to run C++ program online
/*
Write a small class SocketHandler that manages a mock file descriptor. Ensure that when the SocketHandler goes out of scope, the descriptor is closed, and use a unique_ptr to ensure no two objects can own the same socket.
*/
#include<iostream>
using namespace std;

template<typename T>
class SocketHandler{
    
    private:
            T* descriptor;
    
    public:
            SocketHandler(){
                descriptor = new T();
                cout<<"Default constructor"<<endl;
            }
            SocketHandler(const SocketHandler& socket) = delete;
            SocketHandler& operator=(const SocketHandler& socket) = delete;
            SocketHandler(SocketHandler&& socket){
                cout<<"move constructor"<<endl;
                descriptor = socket.descriptor;;
                socket.descriptor = nullptr;
            }
            SocketHandler& operator=(SocketHandler&& socket){
                cout<<"Move Operator"<<endl;
                if(this != &socket){
                    descriptor = socket.descriptor;;
                socket.descriptor = nullptr;
                }
                return *this;
            }
            ~SocketHandler(){
                cout<<"releasing memory"<<endl;
                delete descriptor;
            }
};

#include <iostream>

int main() {


    SocketHandler<int> objSocket3;
    SocketHandler<int> objSocket1;
    //objSocket1 = objSocket;
    SocketHandler<int> objSocket2 = std::move(objSocket1);
    objSocket3 = std::move(objSocket2);

    return 0;
}
