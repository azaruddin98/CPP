// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>

using namespace std;
int main() {
    // Write C++ code here
    set<int> itrset;
    itrset.insert(10);
    itrset.insert(12);
    itrset.insert(7);
    itrset.insert(90);
    itrset.insert(8);
    
    set<int>::iterator itr;
    for(itr=itrset.begin();itr!=itrset.end();itr++){
        cout<<*itr<< " ";
    }
    cout<<endl;
    
    itrset.erase(12);
    itrset.erase(14);
    
      // set<int>::iterator itr1;
    for(itr=itrset.begin();itr!=itrset.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<endl;

    return 0;
}
