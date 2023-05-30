#include <iostream>
#include<algorithm>

using namespace std;
struct Interval{
    int start,end;
};
bool comparator(Interval it1,Interval it2){
    return (it1.start)>(it2.start);
}
int main() {
    Interval inter[] = {{1,2},{10,20},{5,6},{20,30}};
    int n = sizeof(inter)/sizeof(inter[0]);
    sort(inter,inter+n,comparator);
    for(int i =0;i<n;i++){
        cout<<"("<<inter[i].start<<","<<inter[i].end<<"),";
    }
    //cout<<"n : "<<n<<endl;
    //sort()
    return 0;
}
