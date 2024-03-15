# Calculator

## Variables

Whenever you want to store information in code, you use a variable. To create a variable in C++, you need at least two things: the data type, and a name. The datatype tells the code how much space it needs to ask the computer for, and how the data that gets stored there should be treated. So for our first three variables, we told C++ that each variable was an `int`, short for integer. This means the value is a whole number (no decimals), can be positive or negative, and takes up 4 bytes (which means we can store numbers from -2,147,483,648 to 2,147,483,647). Our fourth variable was a `char`, short for character. This means a single character, like 'a' or 'b' or '+' or '1' (which is the text for 1, not the actual number), and it only takes up 1 byte.\
The name part is pretty straightforward. It's just how we can use that value when writing code.

[Here's a good list and description](https://www.w3schools.com/cpp/cpp_data_types.asp) of the data types you'll use most often. [Here's the cppreference.com list](https://en.cppreference.com/w/cpp/language/types), which is probably more info than useful but is more thorough.

### Integer math

If we try and calculate `5 / 2`, we'll get `2` not `2.5`. Since integers have to be whole numbers, and we're doing math with integers and storing the result to integer, all our math will be a whole number. This means everything after the decimal just gets lost. To keep the decimals, we'd have to use either `float` (floating point number (floating point means decimal can be somewhere in the number)) or `double` (double precision float).

## Conditionals

I'll explain the [user input](#user-input) code at the end, because this is more important.

One of the most fundamental building blocks of writing code is conditions, the other being loops (which is also just conditionals depending on how you look at them). They have the following format:

```cpp
if (firstCase) {
    // The code here will only run if `firstCase` is a true statement
} else if (secondCase) {
    // If `firstCase` wasn't true, then we check if `secondCase` is true, and run the code here if it is.
    // Note: We won't even check to see if `secondCase` is true if `firstCase` was true. We'd just do the stuff for `firstCase`, then skip to the end
} else {
    // If neither was true, then we do this part
}
```

The `if` block is the only part you need to use.\
The `else if` block is optional, and you can have as many as you want. They'll be checked in order.\
The `else` block is optional. Without it, no default code gets run when when nothing is true.

### Booleans

A `bool` is a datatype that holds a true or false value. There's a few useful things to know about when working with boolean values.

| Operator | Name | Examples that are `true` | Meaning |
|:---:|---|---|---|
|`<`| Less than | `5 < 10` | Value is less than another |
|`>`| Greater than | `10 > 5` | Value is greater than another |
|`<=`| Less than or equal to | `5 < 10`, `10 <= 10` | Value is less than or equal to another |
|`>=`| Greater than or equal to | `10 > 5`, `10 >= 10` | Value is greater than or equal to another |
|`==`| Equal to | `10 == 10`, `(10 <= 5) == false`, `5 + 3 == 8` | Two values are equal to each other |
|`!=`| Not equal to | `10 != 5`, `(10 <= 5) != true`, `5 + 3 != 600` | Two values are not equal to each other |
|`&&`| And | `(5 < 10) && (5 + 3 == 8)`, `(Avery == Cool) && (Avery == Hot)` | Both statements are true |
|`\|\|`| Or | `(5 < 10) \|\| (5 + 3 == 600)`, `(5 >= 10) \|\| (true)` | One (or both) of the statements is true |
|`!`| Not | `!false`, `!(5 > 10)`, `!(Avery == Ugly)` | The opposite |

You can chain all these together. You can also use parentheses to group things into a single value, which also makes it easier to read. IE write `(a && b) || (c && d)`, not `a && b || c && d`.

## User Input

First we print out what we are asking the user for. We won't use `std::endl` at the end, allowing the stuff we type to show up on the same line. Then we use `std::cin` to get everything the user types up until it reaches a whitespace character (like a space or new line character `\n`). So if were asked for the first number, typed twelve, and then hit enter, we would give our code the following: `12\n`. Then, `std::cout` would read everything until a whitespace, meaning `12`, and store it as an `int` in `firstNumber`. Also, the reason the next output goes on the next line is because we actually typed in the newline character when we hit enter, even though `std::cin` ignores it.

### Quirks of `std::cin`

If for the first number you typed `5 + 3` (instead of just `5`), the program would work as if you typed `5` then `+` then `3`. This is because it reads everything until a whitespace each time. So the first read gets the five, then the next doesn't need you to type, because it still has `+ 3` to read from and gets the plus.\
Also, if your type text or a decimal number, everything breaks because it expects `int` or `char`.
