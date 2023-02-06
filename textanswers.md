## B16 Tute Sheet 1 Text Answers

### Question 2
(a)
Function side-effects are the modification of some non-local stat, e.g. changing the value of a global variable, reading user input fom the console or writing to a file. It is generally a good idea to avoid side-effects since a function can become unpredictable depending on the state of the system. This also makes for easier debugging, testing and formal verification, since the result relies solely on the function's input.
Since most programs require some form of I/O operation, side-effects are inevitable and must be handled carefully.

(b)
The procedure `r()` implements the modulo operation, whereby it computes the remainder of the division of `num` by `s`, assigns it to the global variable `res` and outputs the value to the console as a formatted C string. It operates on the global variables `num` and `res`, so contains side effects. Therefore, its output depends on the current values of these variables, instead of solely on its input parameter `s`. In [Q2.cpp](Q2.cpp), I have improved and re-written `r()`. I have implemented the following design changes:

**Removal of Side-Effects**
- Removed the global variables `num` and `res` and added `num` as the function parameter, along with `s`.
- Added a return statement so that the function returns the computed value of `res` when called.

**Formatting**
- Added more line breaks, whitespace and comments to make the code more readable and understandable.
- More descriptive variable and function names.

### Question 3
