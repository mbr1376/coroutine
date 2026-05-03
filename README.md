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



---

## Requirements

- C++20 compatible compiler  
- GCC 10+ / Clang 12+ / MSVC with C++20 support: