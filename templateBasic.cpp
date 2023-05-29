#include <iostream>
using namespace std;
template<typename T>
T findMax(T x,T y)
{
    if(x>y)
    {
        return x;
    }
    else
        return y;
}

int main() {
    cout<< "int max :" << findMax(10,20)<<endl;
    cout<< "float max :" << findMax(20.2,10.0)<<endl;
    cout<< "char max :" << findMax('m','a')<<endl;
    return 0;
}
