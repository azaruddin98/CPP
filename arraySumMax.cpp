#include <iostream>
using namespace std;

template<typename T>
T Addsum(T a, T b){
    return a+b;
}
template<typename T>
T ArraySum(T a[],int len){
    int sum = 0;
    for(int i=0;i<len;i++){
        sum += a[i];
    }   
    return sum;
}
template<typename T>
T MaxElement(T a[], int len){
    int max = a[0];
    for(int i =0 ; i<len ;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main() {
    int a[5]={10,20,30,40,50};
    cout<<Addsum(5,10)<<endl;
    cout<<Addsum(10.5,20.5)<<endl;
    cout<<ArraySum(a,5)<<endl;
    cout<<MaxElement(a,5)<<endl;
    return 0;
}
