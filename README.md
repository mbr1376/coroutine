# C++ Coroutines Example

This repository demonstrates basic usage of **C++20 coroutines**.  
Coroutines allow functions to pause (`suspend`) and resume execution later, making asynchronous and incremental programming easier.

---

## What Are Coroutines?

A **coroutine** is a function that can suspend execution and continue later from the same point.

C++20 introduces three main coroutine keywords:

- `co_await` – suspend until an asynchronous operation completes
- `co_yield` – produce a value and suspend
- `co_return` – return from a coroutine

Coroutines are commonly used for:
- asynchronous programming
- generators
- event-driven systems
- non-blocking IO

---

## Requirements

- C++20 compatible compiler  
- GCC 10+ / Clang 12+ / MSVC with C++20 support: