

// 1. C++ Output 


// #include <iostream>

// int main() {
//     std::cout << "Hello, World!"; // Outputs the string "Hello, World!" to the console
//     return 0;
// }






// 2. C++ Variables


// #include <iostream>

// int main() {
//     int age = 25;           // Declares an integer variable named 'age' and initializes it with 25
//     double price = 19.99;   // Declares a double variable named 'price' and initializes it with 19.99
//     char grade = 'A';       // Declares a char variable named 'grade' and initializes it with 'A'
//     bool isPassed = true;   // Declares a boolean variable named 'isPassed' and initializes it with true

//     std::cout << "Age: " << age << std::endl;           // Outputs: Age: 25
//     std::cout << "Price: " << price << std::endl;       // Outputs: Price: 19.99
//     std::cout << "Grade: " << grade << std::endl;       // Outputs: Grade: A
//     std::cout << "Passed: " << isPassed << std::endl;   // Outputs: Passed: 1 (true is represented as 1)
//     return 0;
// }




// 3. C++ Identifiers

// Identifiers are the names used to identify variables, functions, arrays, a
// nd other user-defined elements. They must begin with a letter (A-Z or a-z) or an underscore (_) followed by letters, 
// digits (0-9), or underscores. Identifiers are case-sensitive and cannot be the same as C++ reserved keywords.






// 4. C++ Data Types

// C++ provides several fundamental data types:​

// Integer types (int): Whole numbers, e.g., -1, 0, 42.​

// Floating-point types (float, double): Numbers with decimal points, e.g., 3.14, -0.001.​

// Character type (char): Single characters, e.g., 'A', 'z'.​

// Boolean type (bool): Represents truth values: true or false.




// 5. C++ User Input (cin)




// #include <iostream>

// int main() {
//     int age;
//     std::cout << "Enter your age: "; // Prompts the user to enter their age
//     std::cin >> age;                // Takes input from the user and stores it in the 'age' variable
//     std::cout << "You are " << age << " years old." << std::endl; // Outputs the user's age
//     return 0;
// }





// 6. Combining Input and Output    


// #include <iostream>
// #include <string>

// int main() {
//     std::string name;
//     int age;

//     std::cout << "Enter your name: "; // Prompts the user to enter their name
//     std::getline(std::cin, name);     // Takes a full line of input (including spaces) and stores it in 'name'

//     std::cout << "Enter your age: ";  // Prompts the user to enter their age
//     std::cin >> age;                  // Takes input from the user and stores it in the 'age' variable

//     std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl; // Outputs a greeting message with the user's name and age
//     return 0;
// }

