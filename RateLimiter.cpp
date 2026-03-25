// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <algorithm>
#include <mutex>
#include <chrono>

using namespace std;
using namespace std::chrono_literals;
class RateLimiter{
    
    private:
            std::mutex mtx_;
            std::unordered_map<string,vector<int64_t>> requests;
            size_t maxReq = 100;
            int windows_ms = 60000; // milisecond;
    public:
            RateLimiter(size_t cap = 100,int win = 60000):maxReq(cap),windows_ms(win){};
            bool allow(const std::string& key){
                
                auto now = std::chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now().time_since_epoch()).count();
                
                
                std::lock_guard<std::mutex> lock(mtx_);
                auto& reqs =  requests[key];
                reqs.erase(std::remove_if(reqs.begin(),reqs.end(),[now,this](int value){ return (now - value) > windows_ms; }),reqs.end());
                
                if(reqs.size()<maxReq){
                reqs.push_back(now);
                return true;
                }
                else{
                return false;
                }
            }
    
    
};
int main() {
    
    RateLimiter rl(3, 2000); // 3 requests per 2 seconds

    for (int i = 0; i < 5; i++) {
        cout << (rl.allow("user") ? "allowed" : "blocked") << endl;
    }
    return 0;
}
