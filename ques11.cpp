// Write a program to given no. n digit number is Armstrong or not

#include <iostream>
using namespace std;

int power(int base , int power){
    int pow = 1;
    for(int i = 0 ; i < power ; i++){
        pow = pow * base;
    }
    return pow;
}

int digit(int n){
    int dig = 0;
    while(n > 0){
        dig++;
        n /= 10;
    }
    return dig;;
}

int main(){
    int n , arm = 0;
    int org;
    cout << "enter the no to check its armstrong or not: ";
    cin >> n;

    int pow = digit(n);
    org = n;

    while(n > 0){
        int r = n%10;
        arm = power(r,pow) + arm;
        n /=10;
    }

    if(org == arm){
        cout << "the given no. is armstrong";
    }
    else{
        cout << "the given no. is not armstrong ";
    }
}