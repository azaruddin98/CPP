#include<iostream>
#include<memory>


// Online C++ compiler to run C++ program online
using namespace std;
void closeFd(int *fd){
    if(fd){
        std::cout<<"close fd"<<endl;
        delete fd;
    }
}

class SocketHandle{
  
  private:
            unique_ptr<int,decltype(&closeFd)> description;
  public:
            SocketHandle(int val) : description(new int(val),closeFd){
                std::cout<<"val in SocketHandler : "<<val<<endl;
            }
        
    
    
};

int main() {
    // Write C++ code here
    std::cout << "Start small. Ship something.";
    SocketHandle(101);
    return 0;
}
