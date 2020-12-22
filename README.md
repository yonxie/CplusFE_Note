# CplusFE_Note

>This is the replication of examples in book *Introduction to C++ for Financial Engineers An Object-Oriented Approach*.

Only the following chapters are contained in this repo:
- [Chapter 2: Mechanics of C++](https://github.com/yonxie/CplusFE_Note/tree/master/chpt2)
- [Chapter 3: C++ fundamentals](https://github.com/yonxie/CplusFE_Note/tree/master/chpt3)
- [Chapter 5: Operator overloading](https://github.com/yonxie/CplusFE_Note/tree/master/chpt5)
- [Chapter 6: Memory management](https://github.com/yonxie/CplusFE_Note/tree/master/chpt6)

--- 

## Mistakes Made

### 1. Chapter 5

- Only use `friend` when declare a function, but not when define a function.
- No type is needed when declare and define constructors.
- Memeber function names in class cannot be the same with member data name.
- Declare type `ostream&` when overloading `<<`.
- `<<` is a binary operator with first arguement of type `ostream&` and second arguement string.

### 2. Chapter 6
- `->` is used for pointer to call class memebers, equivalent to `(*pointer).member`
