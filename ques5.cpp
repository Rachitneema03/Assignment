// WAP to find sum of first n natural no. 

#include <iostream>
using namespace std;

int main (){
    int n , sum = 0;
    cout << "enter the nth number to find sum: ";
    cin >> n;

    for(int i = 1 ; i <=n ; i++){
        sum = sum +i;
    }
    cout << "the sum of first nth natural no. " << sum;
}