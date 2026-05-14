#include "include/awaite.h"

#include <coroutine>
#include <future>
#include <iostream>
using namespace std;

AWaite::AWaite() {}

AWaite::~AWaite() {}

Task AWaite::test() {
    int value = co_await MyAwaitable{};

    std::cout << value << '\n';
}