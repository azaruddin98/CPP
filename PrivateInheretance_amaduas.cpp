// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Base{
        public:
              int x;
              int y;
        public:
              void setX(int x){
                  this->x = x;
              }
              void setY(int y){
                  this->y = y;
              }
              int  getX(){
                  return x;
              }
              int getY(){
                  return y;
              }
};

class Derived : private Base{
        public:
              int z;
              int k;
        public:
              Derived(){
                  setX(20);
                  z=50;
              }
              void setZ(int z){
                  this->z = z;
              }
              void setK(int k){
                  this->k = k;
                  
              }
              int  getZ(){
                  return z+getX(); // getX can get value from base class
              }
              int  getK(){
                  return k;
              }
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    Derived objDer;
    cout<<objDer.getZ()<<endl;
    cout<<objDer.getX()<<endl;
    return 0;
}
