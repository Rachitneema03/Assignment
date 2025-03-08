// Using function write following C program
// to print all the palindromefrom range 500 to 1000
// to print first 100 odd numbers
// to find binary octal hexadecimal equivalent of a decimal
// to find decimal equivalent for given binary hexadecimal and octahedral 
// to calculate geometrical sum up to nth term

#include <iostream>
using namespace std;

// 1
// int palindrome(int num){
//     int  reversed=0 , digit , original;

//     original = num;
//     while(num != 0){
//         digit = num % 10;     // we will get the last digit of the num
//         reversed = reversed * 10 + digit;       //reversing
//         num = num / 10;        // to reduce the num
//     }
    

//     if(original == reversed){
//         return 1;
//     }
//     else{
//         return 0;
//     }

     
// }

// int main ()
// {
//     int n= 500 ,r ;
//     while(n <= 1000){
//         r = palindrome(n);
//         if(r == 1){
//             cout << n << endl;
//         }
//         n++;
//     }
// }

// 2

// int odd(int n){
//     if(n % 2 != 0){
//         return n;
//     }
//     else{
//         return 0;
//     }
// }

// int main(){
//     int count = 1;

//       for(int i = 1 ; i < 300 ; i++){
//         int r = odd(i);
//         if(r != 0){
//             cout << count << ". " << r << endl;
//             count++;
//         }
//         if(r == 0){
//             continue;
//         }
//         if(count > 100){
//             break;
//         }
        
//       }
    
// }


