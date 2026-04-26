#include <iostream>
#include <string>
#include <thread>

using namespace std;

class Counter{
    
    public:
            atomic<int> totalCalls{0};
    public:
           Counter() =  default;
            void increment() noexcept{
                totalCalls++;
            }
            
            int getValue() const noexcept{
                
                return totalCalls.load();
            }
            Counter(const Counter&) = delete;
            Counter& operator = (const Counter&) = delete;
            
};


class Counter{
    
    public:
            int totalCalls;
            mutex mt1;
    public:
           Counter() =  default;
            void increment() noexcept{
                lock_guard<mutex> l(mt1);
                totalCalls++;
            }
            
            int getValue() {
                lock_guard<mutex> l(mt1);
                return totalCalls;
            }
            Counter(const Counter&) = delete;
            Counter& operator = (const Counter&) = delete;
            
};

int main() {

    return 0;
}
