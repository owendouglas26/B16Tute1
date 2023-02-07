## B16 Tute Sheet 1 Text Answers

### Question 2
(a)
Function side-effects are the modification of some non-local state, e.g. changing the value of a global variable, reading user input fom the console or writing to a file. It is generally a good idea to avoid side-effects since a function can become unpredictable depending on the state of the system. This also makes for easier debugging, testing and formal verification, since the result relies solely on the function's input.
Since most programs require some form of I/O operation, side-effects are inevitable and must be handled carefully.

// T: very good

(b)
The procedure `r()` implements the modulo operation, whereby it computes the remainder of the division of `num` by `s`, assigns it to the global variable `res` and outputs the value to the console as a formatted C string. It operates on the global variables `num` and `res`, so contains side effects. Therefore, its output depends on the current values of these variables, instead of solely on its input parameter `s`. In [Q2.cpp](Q2.cpp), I have improved and re-written `r()`. I have implemented the following design changes:

// T: very good

**Removal of Side-Effects**
- Removed the global variables `num` and `res` and added `num` as the function parameter, along with `s`.
- Added a return statement so that the function returns the computed value of `res` when called.

**Formatting**
- Added more line breaks, whitespace and comments to make the code more readable and understandable.
- More descriptive variable and function names.

### Question 3
(a)
In object-oriented programming (OOP), encapsulation is the bundling of data and methods together into a single class. It hides the internal implementation and limits direct access or modification to the internal states and data. This allows for a single consistent interface for the class and abstracts away the internal complexities, meaning developers can use these objects in the intended way and without regard to the internal implementation.

// T: very good

(b) In OOP, polymorphism is the ability to provide a single interface for different underlying data types. Compile-time polymorphism can be achieved by method overloading, whereas runtime polymorphism is accomplished via method overriding. Overloading occurs when methods belonging to the same class have the same name but accept different parameters, and so the correct method to be called can be determined at compile-time. Runtime polymorphism on the other hand is achieved through method overriding, where a method in a subclass has the same signature as a method in its parent class. The correct method to call therefore depends on the type of the object that is used to invoke it, which is determined at runtime. 

// T: there is a misunderstanding in the first sentence
// T: otw very good

