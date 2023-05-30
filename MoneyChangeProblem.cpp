#include <iostream>
#include<algorithm>

using namespace std;
bool compare(int a,int b){
    return (a<=b);
}
int main() {
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int value;
    cin>>value;
    int n = sizeof(coins)/sizeof(coins[0]);
    while(value!=0){
        int *it = lower_bound(coins,coins+n,value,compare);
            value=value-coins[it-coins-1];
            cout<<coins[it-coins-1]<<" ";
    }
    return 0;
}
