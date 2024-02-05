# How did that work?

So you should have been able to run the code and see a console window print out "Hello, World!" How'd that even happen?

## Compiling

[Here's an obnoxiously in-depth version](./ExtraInfo/WhatIsAComputer.md) of this explanation that you should read first if you're not lame. But if you just want to know the parts that are relevant to writing code (lame), then skip it and keep reading.

Ultimately, a computer is just a glorified circuit board. But it's hard to work with that. Instead we create layers of abstraction that make working with a computer easier to work with. One of these things is whats called "*Assembly*", which is the human readable version of the binary (1s and 0s) that gets sent to your CPU and runs on your hardware. But it's still *super* low level and really hard to work with. So we have high level programming languages like C++. The C++ code that people write doesn't actually run on a computer. It isn't meant for the computer to understand, it's meant for humans to understand. Instead, the C++ code you write gets *compiled*, which means you write the human readable C++ code, and then give it to a tool called a *compiler*. The job of the compiler is to take the C++ code and convert it to assembly, check that your code is valid, and then turn that assembly into the 1s and 0s that will run on the hardware (and even automatically optimize your code, they're incredible).

This means that, unlike other languages, your code needs to be correct and valid before the your computer even considers running it. It also means that we sometimes have to do more work and be more specific than some other languages. It also means that we control the actions of the computer a lot more than other languages. There are so many things that I could list beyond these, and every single one of them has massive ramifications. Whether those ramifications are positive or negative is something that each person gets to decide. Personally, I'm in love with the language.

## The Code

Now let's explain the code.

### Full Code

```cpp
#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
```

We'll start with the first line.

```cpp
#include <iostream>
```

C++ on it's own is really basic, and theres some really common things that you want to do that you can't do immediately. For example, writing stuff on screen. Fortunately, there's a lot of this kind of code that's provided for us in what's called the C++ Standard Library (usually incorrectly referred to as the Standard Template Library or STL). This *include* statement tells the compiler, "Hey, before you start compiling my code, there's this other code that was written somewhere else called 'iostream,' and I'll be using stuff from there." After that, we'll be able to use code that prints stuff on screen, instead of figuring out how to do that ourselves!

More about the Standard Library and Preprocessor Directives [here](./ExtraInfo/StandardLibraryAndPreprocessor.md).

```cpp
int main() {
```

Whenever you write code that a computer can run, you need to tell the computer where to start. In C++, we do this with a special function called *main*. We'll get more into functions later, but we're saying that we have a bunch of code that should run when we call `main`. That code, whatever it is, will give us an `int`, an integer value (meaning a non decimal value). The stuff in the parenthesis is what the function needs to be able to run, in this case nothing (though you can pass command line arguments with `int argc, char* argv[]`). The open curly brace `{` means that the code we're about to see is what to do when we call main.

```cpp
std::cout << "Hello, World!" << std::endl;
```

Since we included `iostream`, we get to use the code from it. One of those functions is called `cout` (character output), and it will print text in the console. The `std` part specifies that `cout` is in the standard namespace. A namespace is basically just a way to group code. Normally we wouldn't be able to write our own function called `cout`, but we could create our own namespace called `custom` and define it there. Then we could use both `std::cout` and `custom::cout`.

Next is the insertion operator `<<`. It means "Put whatever comes next into the thing before." In our case, we're putting `"Hello, World!"` into `cout`, which appears on screen.

Next is `std::endl` which means end line. It's the equivalent of pressing enter on the keyboard while typing. We could have also written `std::cout << "Hello, World!\n";`. The `\n` is called the *newline character*, and is just a way of writing out the thing that your keyboard actually types when you hit enter. Ending with `std::endl` and `\n` technically do two different things, but it's not that important, and I prefer `std::endl` to keep whatever I'm printing "clean".

Finally, the semicolon `;`. This is the code version of a period at the end of a sentence, and it means that the statement is done. You will forget this.

```cpp
return 0;
```

This is saying that we are done running code in `main`, and we're ready to return that integer value we promised to whatever called `main`. For `main`, we return a 0 to indicate "no error", and a 1 to indicate "yes error".

```cpp
}
```

Remember that open curly brace up at `main`? Well now we have to close it to say that the block of code is done.

There it is! The famous "Hello, World!" program in all its glory!
