# What's a computer

This isn't important for learning to code, but I'm going to explain it anyway.

The wild part of computers is that everything that you deal with is just a thing someone made to make other more complex functionality easier to deal with. At the very bottom of this chain of tools is the computer itself, and truly all a computer is is a bunch of wires that can be either on or off. That's all it is.

But not everyone who works with computers is working at the circuit board level. I'd like to add two numbers together in one step, rather than giving the computer a number, then telling it to put it somewhere, then giving it another number, then telling it to add it to the number in the other spot, then getting the sum from that spot, all by turning wires on and off. So we can go up a layer and treat it as logic statements. We use *bits* to represent if a wire has electricity in it or not. 1 means on, 0 means off. This is why computers are 1s and 0s and why we use binary.

Now we'll wire things so that a specific binary sequence actually represents a collection of steps that turn wires on and off and add two numbers. This is "*Machine Code*," it's specific to each processor architecture, and is what the CPU actually gets and runs. And now I can make a computer do math with something like this:

```txt
0101 0101 1000 1011 1110 1100 1000 1011 0100 0101 0000 1000 0000 0011 0100 0101 0000 1100 0101 1101 1100 0011
```

But that's a lot 1s and 0s to deal with, so instead we'll treat the binary numbers as hexadecimal, cutting the number of digits in half. Every 8 binary digits becomes 2 hex digits, (8 bits = 1 *byte*). And now, our code get's to be a lot easier to work with! It looks like this:

```txt
55
8b ec
8b 45 08
03 45 0c
5d
c3
```

And it still sucks. I'm a human not a machine, so instead we'll give those numbers specific names, so that I can read it. This is called "*Assembly*." The computer will still see the number version, but we'll just show it differently:

```asm
PUSH    EBP
MOV     EBP, ESP
MOV     EAX, dword ptr [EBP + firstNumber]
ADD     EAX, dword ptr [EBP + secondNumber]
POP     EBP
RET
```

We're getting closer. We started with wires, then 1s and 0s, then bytes, and now we have something that we can actually read (it shows in plain english where we're doing the addition). But we still aren't able to just add two numbers in a single step, and it's still really hard to read. This is where a high level programming languages like C++ come in.

Instead of writing code that adds two numbers in one of the complicated ways shown above, we can use C++ to write this:

```cpp
int add(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}
```

This language is a language that I, as a human, can easily read and work with. C++ is a *compiled language*, which means you write the human readable C++ code, and then give it to a tool called a *compiler*. The job of the compiler is to take the C++ code and convert it to assembly, check that your code is valid, and then turn that assembly into the machine code that will run on the hardware (and even automatically optimize your code, they're incredible).
