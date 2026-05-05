#include "include/awaite.h"
#include <iostream>
#include <coroutine>
#include <future>
using namespace std;

AWaite::AWaite()
{

}

AWaite::~AWaite()
{

}
 auto AWaite::example() -> task
{
    puts("step1");
    // memory leak
    //co_await std::suspend_always{};
    co_await std::suspend_never{};
    puts("step2");
}
auto AWaite::async_get_ziro() -> std::future<int>
{
    co_await std::suspend_always{};
    co_return 0;
}