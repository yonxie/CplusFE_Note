# CplusFE_Note

>This is the replication of examples in book *Introduction to C++ for Financial Engineers An Object-Oriented Approach*.

Only the following chapters are contained in this repo:
- [Chapter 2: Mechanics of C++](https://github.com/yonxie/CplusFE_Note/tree/master/chpt2)
- [Chapter 3: C++ fundamentals](https://github.com/yonxie/CplusFE_Note/tree/master/chpt3)
- [Chapter 5: Operator overloading](https://github.com/yonxie/CplusFE_Note/tree/master/chpt5)
- [Chapter 6: Memory management](https://github.com/yonxie/CplusFE_Note/tree/master/chpt6)
- [Chapter 7: Inheritance](https://github.com/yonxie/CplusFE_Note/tree/master/chpt7)
- [Chapter 9: Run-time behavior and exception handling](https://github.com/yonxie/CplusFE_Note/tree/master/chpt9)
- [Chapter 10: STL](https://github.com/yonxie/CplusFE_Note/tree/master/chpt10)


## Learning Note

### 1. Chapter 5

- Only use `friend` when declare a function, but not when define a function.
- No type is needed when declare and define constructors.
- Memeber function names in class cannot be the same with member data name.
- Declare type `ostream&` when overloading `<<`.
- `<<` is a binary operator with first arguement of type `ostream&` and second arguement string.

### 2. Chapter 6
- `->` is used for pointer to call class memebers, equivalent to `(*pointer).member`

### 3. Chapter 7
- `virtual` specifier specifies virtual function. The derived class is optional to override this memeber function.
- `virtual void func()=0` define a pure virtual function or pure virtual method which is required to be implemented by a derived class if the derived class is not abstract.
- When declare function with function pointers as argument, it must contain the types the function's arguments. For example, `(*func)(double, int)`.

### 5. Chapter 9
- Remember to define read-only functions as `const`, especially in base class.
- Remember to declare and define destructor in header file.
- `size` methid in `vector` class return `unsigned int` object. Define counter correspondingly when use it in the loop.
- Reference is a name constant for an address, acts mostly like a pointer. However, oo explicit dereferencing operator `*` should be used when return the values. Furthermore, to assign an address of a variable to a reference variable, no address-of operator `&` is needed.

### 6. Chapter 10
- When call a template function, one can explicitly specify the type. C++ support implicit template parameter deduction, so one can ignore the type as well. 
