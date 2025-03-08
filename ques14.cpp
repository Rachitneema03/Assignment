// Write a program to print all four digit Armstrong numbers

#include <iostream>
using namespace std;

int power(int base , int power){
    int pow = 1;
    for(int i = 0 ; i < power ; i++){
        pow = pow * base;
    }
    return pow; 
}

int main(){
    
    for(int i = 1000 ; i <=9999 ; i++){
        int org;
        int n = i;
        org = n;
        int arm = 0;
        
        while(n > 0){
            int r = n% 10;
            arm = power(r,4) + arm;
            n /= 10;
        }
        if(arm == org){
            cout << arm << endl;
        }
        else{
            continue;
        }
    }
}