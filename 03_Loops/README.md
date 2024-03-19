# Loops

## Fibonacci sequence

The [Fibonacci sequence](https://en.wikipedia.org/wiki/Fibonacci_sequence) is a famous set of numbers "in which each number is the sum of the two preceding ones" starting with 0 and 1.\
It starts as: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

## Calculating

Let's say we're given the first two numbers as `a` and `b`, and we need to find the next number `c`.\
To calculate `c`, we just do `c = a + b`.\
So if we started with `a = 5` and `c = 8`, we'd get `c = 5 + 8`, and `c = 13`.\
To calculate the next number, we need to update `a` and `b` so that `a = 8` and `b = 13`. So we do `a = b`, `b = c`.

## The Loops

There are 2 kinds of loops that you can use: `while` and `for`.

### While

```cpp
while (someCondition) {
    // Do something
}
```

When we first get to this code, we check if `someCondition` is true. If it is true, then we run the code inside. Otherwise, we just skip it, just like with `if` statements. But unlike `if` statements, we go back to the top once we're done and recheck if `someCondition` is true (rerunning that code if it is).

### For

Here's the generic version:

```cpp
for (startingValue; someCondition; thingToDoAtTheEnd) {
    // Do something
}
```

But here's an actual version that you'll use a lot that makes it easier to understand:

```cpp
for (int i = 0; i < 10; i++) {
    std::cout << i << std::endl;
}
```

This code will just print out the numbers `0`, `1`, `2`, ..., `8`, and `9`. When we get to the for loop for the first time, we create an `int` called `i` and give it a starting value of 0. Normally you want to give your variables much better and more descriptive names, but in simple for loops like this, it's normal to just do `i` (like for index). After we create `i` and set it to 0, we check if `i < 10`. If it's true then we print, otherwise we skip. After we print, we go back to the top and run the code that says `i++`. This is just a shortcut for `i = i + 1`, meaning 'add 1 to `i` and save the new value to `i`' (same thing for `i--`). After we increment `i`, we check again to see if it's less than 10.
