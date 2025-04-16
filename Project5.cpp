// 1)Converting binary number into decimal number
// 2)Conversion of decimal to binary number
// 3)Functions and standard library functions
// 4)Scope of variables in c++ (IDK what this is going to do it)
// 5)Formal parameter and actual parameter






// #include <iostream>
// using namespace std;
// int main(){






// Converting binary number into decimal number
// int binaryNum;
// int Ans;
// int power = 1;
// cout<<"Enter the binary number"<<endl;
// cin>> binaryNum;
// while(binaryNum > 0){
//   int lastdigit = binaryNum % 10;
//   Ans += lastdigit*power;
//   power*2;          //Adjust the power
//   binaryNum/=10;    //This removes the last digit
// }

// cout<<Ans<<endl;



// Conversion of decimal to binary number


// int decimalNum;
// cout<<"Enter a decimal number : ";
// cin>>decimalNum;
// int ans = 0;
// int power = 1;    // power of 10...

// while(decimalNum > 0){
//   int parityDig = decimalNum % 2; 
//   ans += parityDig * power;
//   power *=10;     //basically this help to increse the value 10, 100, 1000 so that the values doesn't just add up
//   decimalNum/=2;

// }


// cout<<ans<<endl;



// cout<<"Hello world!";

// return 0;
// }







// 3) functions and standard library functions







// #include <cmath>
// #include <iostream>
// #include <string>
// using namespace std;





// int add(int a, int b){
//   return a+b; 
// }


// void fun(string fun){
//   cout<<"Are you having fun "<<fun<<"!";
// }
// int main(){

  // Addition of two numbers with the help of functions,

  // cout<<"Hello world!";
  // int num1;
  // int num2;
  // cout<<"Enter the first number : ";
  // cin>>num1;
  // cout<<"Enter the second number : ";
  // cin>>num2;
  
  // int sum = add(num1, num2);
  // cout<<"The sum of the two provided numbers is : "<<sum<<endl;
  // cout<<add(num1,num2);     //This also works lol





  // There are certain function in cpp that are already persent.

  //For this have to include #include <cmath>
  // int a = 4;          // This is 4^5
  // int b = 5;
  // cout<<pow(a,b)<<endl;
  // cout<<sqrt(25)<<endl;


  // function with void

  // string a = fun("Siro");    This gives error cause the function has void datatype so nothing is given back so nothing can be stored.
  // cout<<fun("siro");    This also will give error.
  // fun("Atharva");     // This works.


 
  
  

//   return 0;
// }







// #include <iostream>
// #include <string>
// #include <math.h>

// using namespace std;
// void siro(string name){
//   cout<<"Welcome "<<name<<"!";
// }


// void naturalSqura(int num);   //We are declaring this here but the code is below the main fuction. This is done to avoid error.
// void radNCircum(int radius);
// void prime(int a, int b);

// int main(){
  // cout<<"Hello world!";     //This is how normally Stuff work. I already know function so well I'II just write and test stuff nothing to explain.
  // cout<<endl; 
  // siro("Atharva");




  // function to print the squres of the first five natural numbers.
  // int inp;
  // cout<< "Enter a number : ";
  // cin>>inp;
  // naturalSqura(inp);


  // With radius as input finding the area and circumfrence of the circle.
  // int inp;
  // cout<< "Enter a number : ";
  // cin>>inp;
  // radNCircum(inp);

  


  // Printing all the odd number till the number given.
















  // Given two number, writing a function to print all the prime numbers between them.
//   int num1;
//   int num2;

//   cout<<"Enter first smaller number : ";
//   cin>>num1;
//   cout<<endl;
//   cout<<"Enter second and bigger number : ";
//   cin>>num2;
//   prime(num1,num2);

//   return 0;
  
// }



// function to print the squres of the first five natural numbers.
// void naturalSqura(int num){
//   for(int i = 1; i<=num; i++ ){
//     cout<<(i)*(i)<<endl;
//   }
// }


// With radius as input finding the area and circumfrence of the circle.
// void radNCircum(int radius){
//   cout<<"Circumference of circle : "<<(2*3.14*radius)<<endl;
//   cout<<"Area of the circle : "<< (3.14*(radius*radius))<<endl;
// }







// Given two number, writing a function to print all the prime numbers between them. (HARD)

// void prime(int a, int b){
//   int z = 0;
//   for(int i = a; i<=b; i++){
//       while(z<i){
//         if(i%z==0){
//         break;
//       }
//       cout<<a<<endl;
//       z++;
//     }
//   }
// }
        // I can't men bye









// 4)Scope of variables in c++ (IDK what this is going to do it)
// Its basically visibility of the variable.--: what all areas are there for where we can access that variable.
// We have 3 types of scopes in c++
// 1)Global --- Varibales that are outside all blocks(loops) and function(even main) in a program, and they can be accessed anywhere in the program
// 2)Function
// 3)Block   
// usually 2nd and 3rd are similar so we combine them and sometimes say "local scope"
    // Local scope -->variables that are inside a function block and can be accessed inside it only. They are unknown entities outside.



// #include<iostream>

// using namespace std;
// // Global scope
// int age = 28;
// string name = "siro";


// void pri(string a){
//   cout<<a<<endl;
// }
// int main(){
//   pri(name);
//   name = "Atharva";   //Value of name updated
//   cout<<name<<endl;

// }






// 
