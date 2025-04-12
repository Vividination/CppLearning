// 1) While Loop
// 2) for loop
// 3) do-while 
// 4) continue keyword
// 5) Patterns problems.
// 6) Extra Problems 


#include <iostream>
using namespace std;
int main(){



  // 1) while Loop
  // int num1 = 1;
  // while(num1<100){
  //   cout<<num1<<endl;
  //   num1++;
  // }




  // 2) for loop

  // for(int i = 0; i<5; i++){
  //   cout<<"hello world! : "<<i<<endl;
  // }






  // 3) do-while ---> usually wrote when we need the loop to run at least once.

  // int i = 1;
  // do {
  //   cout<<"Hello Boyeee"<< i<< endl;
  // }while(false); 

  





  // 4) continue keyword --> this is primarly used to skip something that we don't want in a loop
  
  
  // int i = 45;
  // for(int j = 1; j<=i;j++){
  //   if(j == 10){          //Here 10 is skiped in the print
  //     continue;
  //   }
  //   cout<<j<<endl;
  // }



  //Printing number form 1 to 50 but skipping multiples of 3;
  // int n = 50;
  // for(int i = 0; i<=50; i++){
  //     if(i%3 == 0){
  //       continue;
  //     }
  //     cout<<i<<endl;
  // }

// 




// 5) Patterns problems


// Some Rules for pattern problems

// i)For outer row cont the number of lines. 
// ii)For the inner loopsfocus on the columns and connect them somehow to the rows.
// iii)What we are printing should be printed from the inner loop.
// iv)Observe symmetry.






// * * *
// * * *
// * * *

// for(int i = 3; i>=1;i--){
//   for(int j = 1; j<=3;j++){
//     cout<<" * ";
//   }
//   cout<<endl;

// }
// Here the thing i always forget it that. 
// The inner loop will always start from the start when the outer loop comes to start again.
// so depending apon that we can use the number of stars less or more with the var of the outer loop in the inner loop.
// Becaues the var of the outer loop changes but the inner loop var always restarts.




// * 
// * * 
// * * *

// int RC;
// cout<<"Enter an integer";
// cin>>RC;
// for(int i = 1; i<=RC;i++){
//   for(int j = 1; j<=i;j++){
//       cout<<" * ";
//   }cout<<endl;
// }








// 1
// 12
// 123
// 1234
// 12345

// int RC;
// cout<<"Enter an integer";
// cin>>RC;

// for(int i=1; i<=RC; i++){
//   for(int j = 1; j<=i;j++){
//     cout<<j;
//   }
//   cout<<endl;
// }










// 1
// 22
// 333
// 4444
// 55555
// int num;
// cout<<"Enter a value : ";
// cin>>num;

// for(int i = 1;i<=num;i++){
//   for(int j = 1;j<=i;j++){
//     cout<<i<<" ";
//   }cout<<endl;
// }






// *****
// ****
// ***
// **
// *



// int num;
// cout<<"Enter a number : ";
// cin>>num;
// for(int i = 1; i<=num;i++){
//   for(int j = num; j>=i; j--){
//       cout<<"*";
//   }cout<<endl;
// }






// 12345
// 1234
// 123
// 12
// 1

// int num;
// cout<<"Enter a number";
// cin>>num;
// for(int i = num; i>=1;i--){
//   for(int j = 1; j<=i;j++){
//     cout<<j;
//   }cout<<endl;
// }









//    *   
//   ***  
//  ***** 
// ******* 


// int num = 3;
// for(int i = 1;i<=num;i++){
//   for(int j = num;j>=i;j--){
//     cout<<endl;
//   }cout<<""

// }









// 6) Extra Problems 



// Count the number of digits for a given number n.

// int num;
// cout<<"Enter a number : "<<endl;
// cin>>num;
// int answer = 0;
// while(num>0){
//   answer +=1;
//   num /=10;    //This will remove the last digit form the number
// }
// cout<<answer<<endl;








// find the sum of the digits in the given number.

// int num;
// cout<<"Enter a number : ";
// cin>>num;
// int answer =0;
// while(num>0){
//   answer += num % 10;
//   num /= 10;
// }
// cout<<"The sum of the digits is : "<<answer<<endl;






// Reverse the digits of a number

// int num;
// cout<<"Enter a number : "<<endl;          
// cin>>num;
// int reverse = 0;
// while(num>0){
//   int lastdigit = num % 10;
//   reverse = reverse*10 + lastdigit;
//   num /= 10;
// }
// cout<<"The answer is : "<<reverse;







// Find the sum of the following series. 1+2+3+4+...+n.



// While loop
// int finalDig;
// cout<<"Enter a number : ";
// cin>>finalDig;
// int sum =1;
// int answer = 0 ;
// while(finalDig>0){
//   answer +=sum;
//   sum+=1;
//   finalDig-=1;
// }
// cout<<"The answer is : "<<answer<<endl;



// Print the first n factorial numbers.



// 

return 0 ;

}


