#include <chrono>
#include <iostream>
class Timer{
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point stop;

public:
    Timer(){
        start = std::chrono::steady_clock::now();
    }
    ~Timer(){
        stop = std::chrono::steady_clock::now();
        auto result = std::chrono::duration_cast<std::chrono::seconds>(stop - start);
        std::cout << "Time: "<< result.count() <<" seconds" <<std::endl;
    }
};