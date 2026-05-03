#include "include/awaite.h"
#include <iostream>
#include <coroutine>

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
    //co_await std::suspend_always{};
    co_await std::suspend_never{};
    puts("step2");
}