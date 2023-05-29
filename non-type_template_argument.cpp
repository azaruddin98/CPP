#include <iostream>
#include<cstring>
using namespace std;

template<typename T,int size>
T sum(T (&parr)[size]) //must be address, reference, nullptr,enums,integrals
{   int total = 0;
    for(int i=0;i<size;i++){
        total += parr[i];
    }
    return total;
}

int main() {
    int a[5]={10,20,30,40,50};
    cout<<sum(a)<<endl;
    return 0;
}
