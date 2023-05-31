#include <iostream>
#include<algorithm>

using namespace std;
int main() {
   
   pair<int,int> p = {10,20};
   cout<<p.first<<endl;
   cout<<p.second<<endl;

    pair<int,int> p2(p);
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    
    pair<int,string> p3 = make_pair(10,"shaikh");
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;
    
    pair<pair<int,string>,string> p4 = {{10,"Shaikh"},"Azhar"};
    cout<<p4.first.first<<endl;
    cout<<p4.first.second<<endl;
    cout<<p4.second<<endl;
    return 0;
}
