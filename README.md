# C++ Coroutines Example

This repository demonstrates basic usage of **C++20 coroutines**.  
Coroutines allow functions to pause (`suspend`) and resume execution later, making asynchronous and incremental programming easier.

**Coroutines are commonly used for:**
- asynchronous programming
- generators
- event-driven systems
- non-blocking IO

---

## What Are Coroutines?

![image](image/img1.png)
![image](image/img2.png)
**A routine that supports 4 operations:** 
- Invoke
- Finalize 
- Suspend 
- Resume

### C++ Extension

| Concept   | C++ Coroutine Syntax / API | Example Code |
|-----------|---------------------------|--------------|
| Invoke    | Normal function call      |
| Suspend   | `co_await`, `co_yield`    |
| Resume    | `coro.resume()`           |
| Finalize  | `co_return`               |


A **coroutine** is a function that can suspend execution and continue later from the same point.




C++20 introduces three main coroutine keywords:

- `co_await` – suspend until an asynchronous operation completes
- `co_yield` – produce a value and suspend
- `co_return` – return from a coroutine

## permition Type
**permition_type:** object for contact coroutine and runtime
compiler make permition_type:
    - manage state coroutine
    - manage exception
    - suspend behavior
### struct Permition Type
```cpp
struct promise_type {

    auto get_return_object();

    std::suspend_never initial_suspend();

    std::suspend_never final_suspend() noexcept;

    void return_void();

    void unhandled_exception();
};

```
1-`get_return_object` create object return coroutine
2- `initial_suspend` - > `std::suspend_never` or `std::suspend_always`
3- `final_suspend()`
4- `void return_void()` for coroutine void
5- `return_value(int v)` for return value
6- `unhandled_exception()` handel exeption`


## Await
**await** : object `pause,resume` coroutine
**await heart coroutine**



**Operator co_awaitrequires multiple function**
- `await_ready()` - `true`   not suspend  `false` coroutine stop
- `await_suspend()`  - ‍‍‍`void await_suspend(std::coroutine_handle<> h);`
- `await_resume()` - `T await_resume();`





**By using co_await…**
- Compiler can generates suspend point at the line.
- Programmer can manage coroutine’s control flow with the suspension

---

## Requirements

- C++20 compatible compiler  
- GCC 10+ / Clang 12+ / MSVC with C++20 support:
