# This document provides an overview of various ways to convert a floating-point number (`float`) to an integer (`int`) in C++. Each method has its pros and cons, and understanding these can help you make the right choice for your specific use case.
## Type Conversion Methods
### 1. Implicit Cast 
`int integralpart = decimal;`

*   **Simple but can be unclear.**
    
*   The conversion happens automatically without the need for an explicit cast. While it's concise, it can make the code harder to read and understand.
    

### 2. Explicit Cast (static_cast)

`integralpart = static_cast(decimal);`

*   **Clear and safe.**
    
*   static\_cast makes it obvious that a conversion is happening, improving code readability and ensuring that the conversion is intentional.
    

### 3\. C-Style Cast

`   integralpart = (int)decimal;   `

*   **Not recommended in modern C++.**
    
*   This is an older C-style cast, which works but lacks the safety and clarity of C++'s static\_cast. It's generally considered outdated in modern C++.
    

### 4\. std::trunc()

`#include<cmath>   int integralpart = std::trunc(decimal);`

*   **Truncates the decimal part.**
    
*   This function from the library truncates the fractional part of a floating-point number without rounding.
    

### 5\. std::floor()

`#include<cmath>   int integralpart = std::floor(decimal);   `

*   **Rounds down to the nearest integer.**
    
*   std::floor() will round the number down (even for negative numbers). Useful when you specifically want to round down.
    

### 6\. std::lround() or std::round()

`   #include<cmath>   int integralpart = std::lround(decimal);   `

*   **Rounds to the nearest integer.**
    
*   These functions round the number to the nearest integer, unlike truncation or floor which simply drop or round down the decimal part.
    

Recommendations
---------------

*   **For readability and safety**, it's recommended to use static\_cast or functions like std::trunc().
    
*   **For quick casts**, implicit conversion or C-style casting may work, but they’re less recommended in modern C++ due to the lack of clarity and potential for unintended behavior.
    

Conclusion
----------

Each method has its use case depending on your specific needs:

*   If clarity and safety are priorities, go with static\_cast or a standard library function like std::trunc().
    
*   For simpler, more concise code, implicit casting works but may reduce code readability in more complex situations.
