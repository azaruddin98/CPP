#include <iostream>
#include<cstring>
using namespace std;

template<typename T>
T Addsum(T a, T b){
    cout<<"normal function call"<<endl;
    return a+b;
}
template<> const char* Addsum<const char*>(const char* A, const char* B){ //special datatype handling in different function
    cout<<"inside specialized function for character"<<endl;
    if(strcmp(A,B) > 0)
    {
        return A;
    }
    else
        return B;
}

int main() {
    int a[5]={10,20,30,40,50};
    cout<<Addsum("a","b")<<endl;
    return 0;
}
