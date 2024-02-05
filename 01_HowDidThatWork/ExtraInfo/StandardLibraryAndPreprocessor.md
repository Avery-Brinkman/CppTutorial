# The C++ Standard Library and Preprocessor Directives

As previously explained, the C++ code that you write doesn't technically run on the computer. C++ is just a way for humans to tell a compiler what you want the computer to do, and then it's the job of the compiler to turn that into code that the computer can understand and run. The [International Organization for Standardization](https://www.iso.org/home.html) (ISO) is an organization that, as the name suggests, sets international standards for just about anything, including things like food safety, transport, IT, agriculture, and healthcare. One of the standards is ISO/IEC 14882:2020(E) – Programming Language C++, which you can buy for just $250 [here](https://www.iso.org/standard/79358.html) (or read the working draft for free [here](https://github.com/cplusplus/draft)). This document is just a ton of rules and descriptions that define what C++ is. It's the job of the compiler to meet those specifications and create code that adheres to those rules. It's another reason why compilers are so cool, they're the ones doing most of the work.

## Standard Library

Lets say you wanted to calculate the square root of a number in C++. For us, that's a pretty easy thing to calculate. But for a computer, calculating the square root of a number is actually a lot more complicated than you'd expect. And C++ on it's own doesn't really provide a way for you to do it. So now do we have to research and learn how to implement something like [Goldschmidt’s algorithm](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Goldschmidt%E2%80%99s_algorithm) ourselves, just to do some simple math? No, the ISO came in and saved the day! The ISO also requires that compilers provide a set of common tools and functionalities that we as programmers can use out of the box. It's a built in part of C++ and it's called "*the C++ Standard Library*". Compilers provide you with pre-written C++ code that the ISO requires to be extremely correct, reliable, and efficient. So if you were using llvm as your compiler, the code that calculates the square root looks like [this](https://github.com/llvm/llvm-project/blob/067882cfe970a4ad7fef1432f5fa24fa33150d25/libc/src/__support/FPUtil/generic/sqrt.h#L67). Thank god we didn't have to do that ourselves.

## Preprocessor Directives

### #import

So how do we actually use that code? We can use preprocessor directives, the most common one being `#import`. When you go to compile code, before you even start compiling, the preprocessor will take code that starts with `#` and do various things to it. For `#import`, it will look for code with the name or at the directory inside either angle brackets `<>` or double quotes `""`. Then, it replaces `#import` with the contents of that file. So if we had two files like this:

```cpp
// FirstFile.h

int someFunction();

int someOtherFunction();
```

```cpp
// main.cpp

#include "FirstFile.h"

int main() {
    return 0;
}
```

Then the compiler would see:

```cpp
// main.cpp

int someFunction();

int someOtherFunction();

int main() {
    return 0;
}
```

### #define

We can also use `#define`. Let's say we were going to be using pi a lot. Instead of writing 3.14159265359 over and over, we could write:

```cpp
#include <iostream>

#define PI 3.14159265359

int main() {
    std::cout << PI << std::endl;
    std::cout << 2.0 * PI << std::endl;
    return 0;
}
```

And the compiler would see:

```cpp
// The contents of iostream

int main() {
    std::cout << 3.14159265359 << std::endl;
    std::cout << 2.0 * 3.14159265359 << std::endl;
    return 0;
}
```

### Macros

`#define` can also be used for functions. We could write:

```cpp
#include <iostream>

#define SQUARED(n) (n * n)

int main() {
    std::cout << SQUARED(5) << std::endl;
    return 0;
}
```

And the compiler would see:

```cpp
// The contents of iostream

int main() {
    std::cout << (5 * 5) << std::endl;
    return 0;
}
```
