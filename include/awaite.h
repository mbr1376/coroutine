#ifndef AWAITE_H
#define AWAITE_H

#pragma once

#include <iostream>
#include <coroutine>
#include <future>
struct task {
    struct promise_type {
        task get_return_object() { return {}; }
        std::suspend_never initial_suspend() { return {}; }
        std::suspend_never final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() {}
    };
};
class AWaite
{
public:
    AWaite();
    ~AWaite();
    
    auto example() -> task;
    auto async_get_ziro() -> std::future<int>;
    

private:

};

#endif