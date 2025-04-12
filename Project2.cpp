// Types of Operators in C++




// C++ provides a variety of operators, including:​

// Arithmetic Operators

// Relational (Comparison) Operators

// Logical Operators

// Assignment Operators

// Bitwise Operators

// Unary Operators

// Ternary (Conditional) Operator

// Other Operators (such as sizeof, comma, pointer operators)






// Arithmetic Operators


// #include <iostream>

// int main() {
//     int a = 10;
//     int b = 3;

//     int sum = a + b;        // Addition
//     int difference = a - b; // Subtraction
//     int product = a * b;    // Multiplication
//     int quotient = a / b;   // Division
//     int remainder = a % b;  // Modulus

//     std::cout << "Sum: " << sum << std::endl;               // Outputs: Sum: 13
//     std::cout << "Difference: " << difference << std::endl; // Outputs: Difference: 7
//     std::cout << "Product: " << product << std::endl;       // Outputs: Product: 30
//     std::cout << "Quotient: " << quotient << std::endl;     // Outputs: Quotient: 3
//     std::cout << "Remainder: " << remainder << std::endl;   // Outputs: Remainder: 1

//     return 0;
// }





// Relational (Comparison) Operators




// #include <iostream>

// int main() {
//     int a = 5;
//     int b = 10;
//     //Here 0 == false and 1 == true
//     bool isEqual = (a == b);       // Equal to
//     bool isNotEqual = (a != b);    // Not equal to
//     bool isGreater = (a > b);      // Greater than
//     bool isLess = (a < b);         // Less than
//     bool isGreaterOrEqual = (a >= b); // Greater than or equal to
//     bool isLessOrEqual = (a <= b);    // Less than or equal to

//     std::cout << "a == b: " << isEqual << std::endl;               // Outputs: a == b: 0
//     std::cout << "a != b: " << isNotEqual << std::endl;            // Outputs: a != b: 1
//     std::cout << "a > b: " << isGreater << std::endl;              // Outputs: a > b: 0
//     std::cout << "a < b: " << isLess << std::endl;                 // Outputs: a < b: 1
//     std::cout << "a >= b: " << isGreaterOrEqual << std::endl;      // Outputs: a >= b: 0
//     std::cout << "a <= b: " << isLessOrEqual << std::endl;         // Outputs: a <= b: 1

//     return 0;
// }




// Logical Operators

// #include <iostream>

// int main() {
//     bool a = true;
//     bool b = false;

//     bool andResult = a && b; // Logical AND: true && false → false (0)
//     bool orResult = a || b;  // Logical OR: true || false → true (1)
//     bool notResult = !a;     // Logical NOT: !true → false (0)

//     std::cout << "a && b: " << andResult << std::endl; // Outputs: a && b: 0
//     std::cout << "a || b: " << orResult << std::endl;  // Outputs: a || b: 1
//     std::cout << "!a: " << notResult << std::endl;     // Outputs: !a: 0

//     return 0;
// }





//  Assignment Operators  



// #include <iostream>

// int main() {
//     int a = 10;

//     a += 5;  // a = a + 5 (a becomes 15)
//     std::cout << "a += 5: " << a << std::endl; 

//     a -= 3;  // a = a - 3 (a becomes 12)
//     std::cout << "a -= 3: " << a << std::endl; 

//     a *= 2;  // a = a * 2 (a becomes 24)
//     std::cout << "a *= 2: " << a << std::endl; 

//     a /= 4;  // a = a / 4 (a becomes 6)
//     std::cout << "a /= 4: " << a << std::endl; 

//     a %= 5;  // a = a % 5 (a becomes 1)
//     std::cout << "a %= 5: " << a << std::endl; 

//     return 0;
// }






// Bitwise Operators

// #include <iostream>

// int main() {
//     int a = 5;  // Binary: 0101
//     int b = 3;  // Binary: 0011

//     std::cout << "a & b: " << (a & b) << std::endl;  // AND: 0001 (1)
//     std::cout << "a | b: " << (a | b) << std::endl;  // OR:  0111 (7)
//     std::cout << "a ^ b: " << (a ^ b) << std::endl;  // XOR: 0110 (6)
//     std::cout << "~a: " << (~a) << std::endl;        // NOT: 1111111111111010 (-6)
//     std::cout << "a << 1: " << (a << 1) << std::endl; // Left shift: 1010 (10)
//     std::cout << "a >> 1: " << (a >> 1) << std::endl; // Right shift: 0010 (2)

//     return 0;
// }






// Unary Operators



// #include <iostream>

// int main() {
//     int a = 10;
//     int b = -a; // Negation

//     int x = 5;
//     std::cout << "x++: " << x++ << std::endl; // Post-increment (prints 5, then x becomes 6)
//     std::cout << "++x: " << ++x << std::endl; // Pre-increment (x becomes 7, then prints 7)

//     return 0;
// }





// Ternary Operator



// #include <iostream>

// int main() {
//     int a = 10, b = 20;
//     int min = (a < b) ? a : b; // If a < b, return a; otherwise, return b

//     std::cout << "Minimum value: " << min << std::endl; // Outputs: Minimum value: 10

//     return 0;
// }




// Miscellaneous Operators


// #include <iostream>

// int main() {
//     int a = 5;
//     int* ptr = &a; // Pointer to 'a'

//     std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl; // Size of int: 4 bytes
//     std::cout << "Address of a: " << &a << std::endl; // Prints memory address
//     std::cout << "Value of a using pointer: " << *ptr << std::endl; // Dereferencing pointer

//     return 0;
// }
