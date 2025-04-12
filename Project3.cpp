// Conditionals --
//  1) if statement 
//  2) Nested if-else statement 
//  3) Conditional operators
//  4) Difference bitween & and && also | and ||
//  5) Switch Case





// 1) if statement  



#include <iostream>
#include <string>
using namespace std;
int main(){



// --> crush dectetecter
//   string name;

//   cout<<"Enter your name : ";
//   cin>>name;
//   cout<<endl;

//   if(name == "Rishika"){
//       cout<<"Crush dectetected";
//   }else if(name =="Aditya" || name == "Archit" || name =="Shreyansh"){
//     cout<<"Friend dectetected";
//   }else{
//     cout<<"Idk who the hell is this guy!";

//   }
//    return 0;





// 2) Nested if-else statement --> its just using if-else inside if-else

// int marks;
// cout<<"Enter your marks! :: "<<endl;
// cin >> marks;
// cout<<endl;
// if(marks > 33){
//   cout<<"You've passed "<<endl;
//   if(marks >70){
//     cout<<"You're performance is very good...";
//     cout<<"You have scored "<<marks<<"!";
//   }else{
//     cout<<"Your still need improvement!"<<endl;
//   }

// }else if(marks<33){
//   cout<<"You need improvement : ";
//   cout<<"You've scored " <<marks<<"!";
// }









//  3) Conditional operators


// just using && , || or !

// int smaller = 34;
// int bigger = 43;
// bool asIf = true;
// bool Ifas = false;

// if(smaller >= bigger && asIf){

//   cout<<"This arnt coming cause of the first statment";

// }else if(smaller < bigger || Ifas){

//   cout<<"Ifas is false but other one is true so yaaa its gonna print"<<endl;

// }

// if(!asIf){

//   cout<<"asIf is true but we did ! so not asIf todayh";

// }else if(!(smaller>bigger)){

//   cout<<"I think this will work"<<endl;

// }






// 4) Difference bitween & and && also | and ||
// here & and | are bitwise operator and && and || are logical operators.


// if(false & 5/0 == 1){
//   cout<<"idk if this will work!";

// } else{
//   cout<<"Here we go! "<<endl;
// }

        //Here it gave error that 0/ one. The code though continues.

// Here we divided a number with 0 which gives an error
// So & checks first statement whic his false. Then it goes to the second and check it.
// If here the first statement is false it will proceed to the next "else" stament (if persent)
// This will happen even if the other statement is true.
// One thing important is that it checks the other statement even if the first one is false.
// But if we use && and the first one is false then it would just skip the second statement.



// if (false && 5/0 == 1){
//   cout<<"idk if this will work!";

// }else{
//   cout<<"Here we go! "<<endl;
// }

      //Here it just skipped the other statement and did'nt even gave an error.






// similarly | and || works

// if(true | 5/0 == 1){
//   cout<<"Hello world!";
// }else{
//   cout<<"Bye world";
// }                                //Gave an error but continued



// if(true || 5/0 == 1){
//   cout<<"Hello world!";
// }else{
//   cout<<"Bye world";
// }                           //Didn't gave an error







//  5) Switch Case --> used when one value is compared with multiple values.



// int subjectCode;
// cout<<"917	English	\n"
//     <<"923	Sanskrit	\n"
//     <<"928	Maths	\n"
//     <<"930	Home science	\n"
//     <<"Enter the Subject Code"<<endl;
// cin>>subjectCode;

// switch(subjectCode){
//   case 917:
//       cout<<"English";
//       break;
//   case 923:
//       cout<<"Sanskrit";
//       break;
//   case 928:
//       cout<<"Maths";
//       break;
//   case 930:
//     cout<<"Home Science";
//     break;
// }  
// cout<<" is your subject!";


return 0;


}


