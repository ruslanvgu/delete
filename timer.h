#ifndef TIMER_M
#define TIMER_M
#include <chrono>
#include <iostream>

template <typename TypeMeasure>
class Timer{
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point stop;

public:
    Timer(){
        start = std::chrono::steady_clock::now();
    }
    ~Timer(){
        stop = std::chrono::steady_clock::now();
        auto result = std::chrono::duration_cast<TypeMeasure>(stop - start);
        std::cout << "Time: "<< result.count() <<std::endl;
    }
};
#endif