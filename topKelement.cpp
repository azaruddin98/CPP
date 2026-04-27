// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int main() {
    // Write C++ code here
 
    vector<int> v = {4, 4, 1, 1, 1, 2, 2, 3};
    int k = 2;
    unordered_map<int,int> valueCount;
    for(int n:v){
        valueCount[n]++;
    }
    vector<pair<int,int>> feqVec(valueCount.begin(),valueCount.end());
    std::sort(feqVec.begin(),feqVec.end(),[](const std::pair<int,int>&a,const std::pair<int,int>&b){return a.second>b.second;});
    
    for(auto const& pairElement  : feqVec){
        cout<<pairElement.first<<" "<<pairElement.second<<endl;
    }
    
    std::vector<int> result;
    for(int i=0;i<=k;i++){
        result.push_back(feqVec[i].first);
    }
    cout<<"======"<<endl;
    for(auto const& n:result){
        cout<<n<<endl;
    }
    return 0;
}
