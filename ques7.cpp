// WAP to find sum of a no.

#include <iostream>
using namespace std;
int main(){
    int n , sum =0;
    cout << "enter the no to find the sum of all digit: ";
    cin >> n;

    while(n > 0){
        int r = n%10;
        sum = sum + r;
        n = n/10; 
    }
    cout << "the sum of all the digits is " << sum;
}